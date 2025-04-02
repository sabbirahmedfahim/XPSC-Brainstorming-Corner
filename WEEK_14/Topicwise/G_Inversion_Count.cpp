#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n; cin >> n;
    pbds<pair<int, int>> p;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        p.insert({data, i});
        mp[i] = data;
    }
    
    ll cnt_inversions = 0;
    for (int i = 0; i < n; i++)
    {
        cnt_inversions += p.order_of_key({mp[i], i}); // *** interesting, working based on {}->first

        // cout << p.order_of_key({mp[i], i}) << " ";

        p.erase({mp[i], i});
    }
    // cout  << nl;

    cout << cnt_inversions << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}