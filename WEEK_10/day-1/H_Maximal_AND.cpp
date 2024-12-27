#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int B = 30;
void solve()
{
    ll n, kk; cin >> n >> kk;
    vector<int> v(n); int maxSetBit = 30; for(auto &data : v) cin >> data;
    /*
    Observation: We will prioritize turning on the most significant bits (MSBs) [etna mehenga nehi, right-most bit ta on korar try korte thakbo, see examples]
    instead of smaller bits. For example:
    32 16 8 4 2 1
    Instead of trying to add small values like 
    32 > 16 + 8 + 4 + 2 + 1 = 31,
    16 > 8 + 4 + 2 + 1
    we target the //largest available value// directly, e.g., 32.

    input: 
    1
    7 0
    4 6 6 28 6 6 12
    key-observation:
    4 ->  0 0 1 0 0 
    6 ->  0 0 1 1 0 
    6 ->  0 0 1 1 0 
    28 -> 1 1 1 0 0 
    6 ->  0 0 1 1 0 
    6 ->  0 0 1 1 0 
    12 -> 0 1 1 0 0 

    For each column (bit position), calculate the number of off bits and 
    determine whether it is beneficial to turn them on.
    */
     
    vector<int> bits(B+1);
    for (int i = 0; i < n; i++)
    {
        for (int k = B; k >= 0; k--)
        {
            if((v[i] >> k) & 1) bits[k]++; // Count the number of //on bits// for each bit position
        }
    }

    int ans = 0;
    for (int k = B; k >= 0; k--)
    {
        if(bits[k] == n) // that means ei particular bit er shob bit on
            ans += (1<<k); // Add 2^k to the answer
        else // some bit on and some bit off, or maybe all bits are off
        {
            int needToOn = n - bits[k]; // Calculate the number of off bits
            if(kk >= needToOn)
            {
                kk -= needToOn; ans += (1<<k); // Add 2^k to the answer
            }
        }
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}