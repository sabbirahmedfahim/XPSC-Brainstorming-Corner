// highly recommended the tutorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<ll> v(n);
    ll G1 = 0, G2 = 0; // lesson: GCD zero kore rakhle next jetar shate gcd korbo shei value te assign hoye jay
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; 
        if(i%2 == 0) G1 = __gcd(G1, v[i]);
        else G2 = __gcd(G2, v[i]);
    }
    
    bool G2_Ok = true, G1_Ok = true;
    for (int i = 0; i < n; i++)
    {
        if((i%2 == 0 && v[i]%G2 == 0)) G2_Ok = false;
        else if(i%2 == 1 && v[i]%G1 == 0) G1_Ok = false;
    }
    if(G2_Ok) cout << G2 << nl;
    else if(G1_Ok) cout << G1 << nl;
    else cout << 0 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}