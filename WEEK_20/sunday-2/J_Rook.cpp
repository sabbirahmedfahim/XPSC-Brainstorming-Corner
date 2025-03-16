#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    for (char i = '1'; i <= '8'; i++)
    {
        if(s[1] == i) continue;
        cout << s[0] << i << nl;
    }
    for (char i = 'a'; i <= 'h'; i++)
    {
        if(s[0] == i) continue;
        cout << i << s[1] << nl; 
    }
    cout << nl;
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