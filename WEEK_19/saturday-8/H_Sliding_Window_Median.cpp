// an easy implementation based problem
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

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    pbds<pair<int, int> > p; // since we're storing duplicate element but unable to erase using less_equal
    map<int, int> mp; // index, value track rakhar jonno

    int l = 0, r = 0;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        p.insert({data, i});    
        mp[i] = data;

        if(r - l + 1 == k)
        {
            res.push_back(p.find_by_order((k-1)/2)->first); // k-1 for zero based index
            p.erase({mp[l], l});
            l++;
        }
        r++;
    }
    
    print(res);

    return 0;
}