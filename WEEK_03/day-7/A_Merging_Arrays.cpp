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

    int n, m; cin >> n >> m;
    vector<ll> a(n), b(m), ans;
    for(auto &data : a) cin >> data;
    for(auto &data : b) cin >> data;

    int l = 0, r = 0;
    if(a.back() <= b.back())
    {
        while (r < m)
        {
        if(l < n && a[l] <= b[r]) 
            {
            ans.push_back(a[l]); l++;
            }
        else 
           {
           ans.push_back(b[r]); r++;
           }
        }
    }
    else 
    {
        while (r < n)
        {
        if(l < m && b[l] <= a[r]) 
            {
            ans.push_back(b[l]); l++;
            }
        else 
           {
            ans.push_back(a[r]); r++;
           }
        }
    }
    
    print(ans);

    return 0;
}