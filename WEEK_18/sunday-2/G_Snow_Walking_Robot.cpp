// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    int l = count(all(s), 'L');
    int r = count(all(s), 'R');
    int u = count(all(s), 'U');
    int d = count(all(s), 'D');

    int mn_lr = min(l, r);
    int mn_ud = min(u, d);
    if(min(mn_lr, mn_ud) == 0) // edge case
    {
        if(mn_ud == 0)
        {
            int sz = min(mn_lr, 1);
            string x(sz, 'L');
            string y(sz, 'R');
            cout << 2 * (sz) << nl;
            string res = x + y; 
            cout << res << nl;
        }
        else
        {
            int sz = min(mn_ud, 1);
            string x(sz, 'U');
            string y(sz, 'D');
            cout << 2 * (sz) << nl;
            string res = x + y; 
            cout << res << nl;
        }
        return;
    }

    cout << 2 * (mn_lr + mn_ud) << nl;
    string x(mn_lr, 'L');
    string y(mn_lr, 'R');
    string o(mn_ud, 'U');
    string p(mn_ud, 'D');
    // string res = x + y + o + p; // wrong
    string res = x + o + y + p;
    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)  
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}