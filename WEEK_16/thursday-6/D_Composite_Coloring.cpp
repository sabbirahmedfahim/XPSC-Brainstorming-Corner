#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
vector<int> allPrimes = { 2,3, 5 ,7 ,11, 13, 17, 19, 23, 29, 31};
void solve()
{
    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;

    map<int, vector<int> > mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if(a[i]%allPrimes[j] == 0)
            {
                mp[allPrimes[j]].push_back(i);
                break;
            }
        }
    }
    
    int color = 1;
    vector<int> res(n);
    for(auto [key, val] : mp)
    {
        for(auto pos : val)
        {
            res[pos] = color;
        }
        color++;
    }

    cout << mp.size() << nl;
    print(res);
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