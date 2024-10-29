#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;
    ll coinGains = 0;
    ll coinLost = 0;
    int cnt = 0;
    for (int i = n; i >= 0 && x > cnt; i--, cnt++)
    {
        coinGains += pow(2, i);
    }
    for (int i = 1; i <= n-x; i++)
    {
        coinLost += pow(2, i);
    }
    cout << coinGains - coinLost << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}