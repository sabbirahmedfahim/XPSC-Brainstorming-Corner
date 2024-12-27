#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
We cannot think about bitwise operations without considering bits. 
We need to think bit by bit.
*/
void solve()
{
    ll n; cin >> n;
    // cout << __lg(n) << nl; // `__lg(n)` returns maximum bit => O(1)

    /* to calculate the max bit manually:
    ll tmp = n; int maxBit = 0;
    while (tmp) // O(n)
    {
        tmp >>= 1; // right shift
        maxBit++;
    }
    */
    
    
    deque<ll> ans;
    for (int k = 0; k <= __lg(n); k++)
    {
        if((n>>k) & 1) 
        { 
            ll data = n - (1LL << k); // (1LL << k) turns off the k-th bit
            if(data > 0) ans.push_front(data); // (Edge Case) let's day, data = 8, it's single bit on(100), since only positive values allowed, to handle zero, added the if condition
        }
    }
    ans.push_back(n); // add the original number to the result
    cout << ans.size() << nl;
    print(ans);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}