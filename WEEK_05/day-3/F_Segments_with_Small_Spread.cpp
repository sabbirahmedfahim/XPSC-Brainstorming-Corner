#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int n; ll k; cin >> n >> k;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;

    multiset<ll> ml; ll cnt = 0;

    for (int l = 0, r = 0; r < n; r++)
    {
        ml.insert(v[r]);
        if(*--ml.end() - *ml.begin() <= k)
        {
            cnt += (r-l+1);
        }
        else
        {
            while (l <= r && *--ml.end()- *ml.begin() > k)
            {
                ml.erase(ml.find(v[l])); l++;
            }
            cnt += (r-l+1);
        }
    }
    
    cout << cnt << nl;

    return 0;
}