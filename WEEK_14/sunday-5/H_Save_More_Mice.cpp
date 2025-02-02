#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll hole, k; cin >> hole >> k; deque<ll> v(k); for(auto &e : v) cin >> e;
    sort(all(v));

    ll cat = 0, cnt = 0;
    while (!v.empty() && cat < v.back())
    {
        cnt++;
        ll need = hole - v.back();
        v.pop_back();
        cat += need;
    }

    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
