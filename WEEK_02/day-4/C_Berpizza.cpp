#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int q; cin >> q;
    int customerNo = 1;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    
    while (q--)
    {
        int cmd; cin >> cmd;
        if(cmd == 1)
        {
            int money; cin >> money;
            s.insert({customerNo, money});
            ml.insert({money, -customerNo}); // remember minus
            customerNo++;
        }
        else if(cmd == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money, -pos}); // remember minus
        }
        else 
        {
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first; // remember minus
            ans.push_back(pos);
            s.erase({pos, money});
            ml.erase(--ml.end()); 
        }
    }
    
    print(ans);

    return 0;
}