#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, t; cin >> n >> t; vector<int> v(n); for(auto &data : v) cin >> data;

    auto canWePlace = [&](ll seconds) // nothing but a boolean function declared inside the main function
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (seconds/v[i]);
            if(cnt >= t) return true;
        }
        return false;

    // } /* do not forget to add a semicolon ^_^ */ 
    };

    // int l = 1, r = 10E9, mid, ans;
    ll l = 1, r = 10E18, mid, ans;
    while (l <= r) // O(N*log10E18)
    {
        mid = l + (r-l)/2;
        if(canWePlace(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    
    cout << ans << nl;


    return 0;
}