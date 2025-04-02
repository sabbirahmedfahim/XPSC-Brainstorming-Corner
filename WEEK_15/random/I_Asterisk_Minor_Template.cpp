// Resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string x,y; cin >> x >> y;
    
    if(x[0] == y[0])
    {
        cout << "YES" << nl;
        cout << x[0] << "*" << nl;
        return;
    }
    
    if(x.back() == y.back())
    {
        cout << "YES" << nl;
        cout << "*" << x.back() << nl;
        return;
    }
    
    for(int i=0; i<x.size()-1; i++)
    {
        string z = x.substr(i,2);
        if(y.find(z) != -1)
        {
            cout << "YES" << nl;
            cout << "*" + z << "*"<< nl; 
            return;
        }
    }
    
    cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1; 
    cin >> t; // multiple tc
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}