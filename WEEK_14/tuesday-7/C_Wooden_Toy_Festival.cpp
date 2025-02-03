#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &e : v) cin >> e;
    sort(all(v));

    auto canWePlace = [&] (vector<int> v, int mid)
    {
        int cnt = 1, l = 0;
        for (int r = 0; r < n; r++)
        {
            if(v[r] - v[l] > 2*mid)
            {
                l = r; cnt++;
            }
        }
        // return cnt >= 3;
        return cnt <= 3;
    };

    int l = 0, r = 1E9, mid, ans = -1;

    while (l <= r)
    {
        mid = l + (r-l)/2;
        if(canWePlace(v, mid))
        {
            ans = mid; r = mid - 1;
        }
        else l = mid + 1;
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