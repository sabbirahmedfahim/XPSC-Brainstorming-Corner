#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<ll> v(n); for(auto &data : v) cin >> data;
    sort(all(v));

    auto canWePlace = [&](ll median)
    {
        ll op = 0;
        for (int i = n/2; i < n; i++)
        {
            // op += (op-v[i]);
            op += (v[i] < median ? (median - v[i]) : 0); // v[i] greater or equal hole median banaite cost(K) laghbena
            if(op > k) return false;
        }
        return true;
    };

    // ll l = 0, r = n-1, mid, ans; // wrong [think why]
    ll l = 1, r = 1E18, mid, ans; // YEah, not zero
    while (l <= r)
    {
        mid = l + (r-l)/2;
        if(canWePlace(mid))
        {
            ans = mid;
            l = mid + 1; // mid er jonno ans available, now we're thinking to reach big values
        }
        else r = mid - 1;
    }
    
    cout << ans << nl;

    return 0;
}