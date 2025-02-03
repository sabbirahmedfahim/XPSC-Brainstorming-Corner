#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    // cout << "Output: " << nl;
    
    ll n, k; cin >> n >> k;
    vector<ll> v(n); 
    for(auto &e : v) cin >> e;
    
    auto canWePlace = [&](ll cnt)
    {
        ll tmp = k;
        for(auto data : v)
        {
            if(data < cnt) tmp -= (cnt-data);
            if(tmp < 0) return false;
        }
        return true;
    };

    ll l = 1, r = 1E18, mid, ans = -1;
    while(l <= r)
    {
        mid = l + (r-l)/2;
        if(canWePlace(mid))
        {
            ans = mid; l = mid + 1;
        }
        else r = mid - 1;
    }
    
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    //solve();
    int t; cin >> t; 
    while(t--) solve();
    

    return 0;
} 