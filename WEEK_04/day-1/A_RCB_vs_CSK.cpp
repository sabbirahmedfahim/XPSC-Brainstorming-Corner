#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    
    int x, y; cin >> x >> y;
    cout << ((x-y >= 18)? "RCB" : "CSK") << nl;
}
int main()
{
    iOS

    int t; //cin >> t; 
    t = 1;
    while (t--) solve();

    return 0;
}