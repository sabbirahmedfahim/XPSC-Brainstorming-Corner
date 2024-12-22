#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Perfect example of bitwise combination. Highly suggested the resolved class. ***
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n); for(auto &data : v) cin >> data;
    for(int mask = 0; mask <(1 << n); mask++) // (1 << n) means 2 power n
    {
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            if((mask>>k) & 1) sum += v[k];
            else sum -= v[k];
            // if((mask>>k) & 1) cout << v[k] << " "; // print the line to understand combinations
        }
        // cout << sum << nl; // print it also to understand...
        if(sum%360 == 0)
        {
            cout << "YES" << nl; return 0;
        }
    } 
    cout << "NO" << nl;

    return 0;
}