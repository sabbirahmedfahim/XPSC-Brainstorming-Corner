// module
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
/*
test case used in module:
6
dbbkbk
*/
void solve()
{
    int n; string s; cin >> n >> s;

    string r = s;
    reverse(all(r));

    map<char, vector<int> > pos_s, pos_r;
    for (int i = 0; i < n; i++)
    {
        pos_s[s[i]].push_back(i); 
        pos_r[r[i]].push_back(i);
    }

    // for(auto [key, val] : pos_s) // print to understand 
    // {
    //     cout << key << " --> ";
    //     print(val);
    // }
    // cout << nl;
    // for(auto [key, val] : pos_r) // print to understand 
    // {
    //     cout << key << " --> ";
    //     print(val);
    // }

    // main part
    vector<int> permutation(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int j = 0; j < pos_s[ch].size(); j++)
        {
            permutation[pos_s[ch][j]] = pos_r[ch][j];
        }
    }

    // counting inversions using pbds
    pbds<int> p;
    ll cnt_inversions = 0;
    for (int i = n-1; i >= 0; i--)
    {
        cnt_inversions += p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }
    
    cout << cnt_inversions << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}