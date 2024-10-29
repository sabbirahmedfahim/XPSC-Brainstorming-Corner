#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;
    vector<ll> prefixSum(n);
    prefixSum[0] = v[0];
    int pref_i = 0, suf_i = 0;
    ll prefixMx = 0, suffixMx = 0;
    bool isVisited = false;
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + v[i];
        if(prefixSum[i]%2 == 0 && prefixSum[i] >= prefixMx) 
        {
            prefixMx = prefixSum[i];
            pref_i = i;
            isVisited = true;
        }
    }
    vector<ll> suffixSum(n);
    suffixSum[0] = v[n - 1];
    for (int i = 1, j = n-2; i < n; i++, j--)
    {
        suffixSum[i] = suffixSum[i-1] + v[j];
        if(suffixSum[i]%2 == 0 && suffixSum[i] >= suffixMx) 
        {
            suffixMx = prefixSum[i];
            suf_i = i;
            isVisited = true;
        }
    }
    if(prefixSum[pref_i] + v[0]%2 == 0) pref_i++;
    if(suffixSum[suf_i] + v[0]%2 == 0) suf_i++;
    if(isVisited) cout << max(pref_i, suf_i) + 1 << nl;
    else
    {
        if(v[0]%2) cout << 0 << nl;
        else cout << 1 << nl;
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}