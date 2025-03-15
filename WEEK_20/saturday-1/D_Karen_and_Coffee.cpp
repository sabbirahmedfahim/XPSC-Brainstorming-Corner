#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N  = 200000 + 5;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k, queries; cin >> n >> k >> queries;
    vector<int> diff(N + 2);

    for (int i = 0; i < n; i++)
    {
        int l, r; cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }
    
    vector<int> pref(N + 1);
    // for (int i = 1; i <= 150; i++) // for output checking
    // {
    //     pref[i] = pref[i-1] + diff[i];
    //     cout << i << " -> " << pref[i] << nl;
    // }
    // cout << nl;
    for (int i = 1; i <= N; i++)
    {
        pref[i] = pref[i-1] + diff[i];
    }

    // while (queries--) // O(n * n) -> TLE
    // {
    //     int left, right; cin >> left >> right;

    //     int cnt = 0;
    //     for (int i = left; i <= right; i++)
    //     {
    //         if(pref[i] >= k) cnt++;
    //     }
    //     cout << cnt << nl;
    // }

    vector<int> preCalc;
    for (int i = 1; i <= N; i++)
    {
        if(pref[i] >= k) preCalc.push_back(i);
    }

    while (queries--)
    {
        int left, right; cin >> left >> right;
        auto lo = lower_bound(all(preCalc), left); // greater or equal than x
        auto hi = upper_bound(all(preCalc), right); // first element that is stricktly greater than x
        cout << hi - lo << nl;
    }

    return 0;
}