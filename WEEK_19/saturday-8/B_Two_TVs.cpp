#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    map<int, int> diff;
    /* The constant is 10E9, we'll use a map over an array.
    note that we're skiping the values from middle of the range and updating just l, r+1,
    since we're calculating their previous contribution, so it will be matter */

    while (n--)
    {
        int l, r; cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }
    
    // for(auto [key, val] : diff)
    // {
    //     cout << key << " ";
    // }
    // cout << nl;

    ll sum = 0;
    for(auto [key, val]: diff)
    {
        sum += val;
        // cout << sum << " ";
        if(sum > 2) 
        {
            cout << "NO" << nl; return 0;
        }
    }
    // cout << nl;
    cout << "YES" << nl;

    return 0;
}