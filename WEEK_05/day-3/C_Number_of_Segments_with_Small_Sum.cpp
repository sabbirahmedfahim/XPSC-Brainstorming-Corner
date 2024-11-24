#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
lesson : n-th length e koyta subarray ache --> n*(n+1)/2
*/
int main()
{
    iOS

    int n; ll s; cin >> n >> s;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;
    
    ll cnt = 0, sum = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        sum += v[r];
        if(sum <= s) cnt += (r-l+1);
        else 
        {
            while (sum > s && l <= r) // to fix corner case, added: l <= r
            {
                sum -= v[l]; l++;
            }
            cnt += (r-l+1);
        }
    }
    cout << cnt << nl;

    return 0;
}