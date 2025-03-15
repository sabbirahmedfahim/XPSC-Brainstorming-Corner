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

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    pbds<int> p;
    while (n--)
    {
        int data; cin >> data;
        p.insert(data);
    }
    while (m--)
    {
        int data; cin >> data; data++;
        auto it = p.order_of_key(data); // number of values less or equal to data
        cout << it << " ";
    }
    

    return 0;
}