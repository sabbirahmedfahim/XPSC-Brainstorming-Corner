#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto &data : v) cin >> data;
    ll mx_subarray_sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];
            if(sum%2 == 0) mx_subarray_sum = max(mx_subarray_sum, j - i + 1);
        }
    }
    cout << mx_subarray_sum << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}