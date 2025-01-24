#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve() 
{
    int x; cin >> x;
    
    vector<int> ans;
    if(x & 1)
    {
        ans.push_back(3); x -= 3;
    }
    while(x)
    {
        ans.push_back(2);
        x -= 2;
    }
    cout << ans.size() << nl;
    print(ans);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}