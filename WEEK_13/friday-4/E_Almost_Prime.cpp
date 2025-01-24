#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve() 
{
    int n; cin >> n;
    vector<bool> comp(n+1, 0);
    vector<vector<int> > divisors(n+1);
    
    for(int i=2; i<=n; i++)
    {
        if(comp[i]) continue;
        divisors[i].push_back(i);
        
        for(int j=i+i; j<=n; j+=i)
        {
            comp[j] = true;
            divisors[j].push_back(i);
        }
    }
    
    int cnt = 0;
    for(auto data : divisors)
    {
        if(data.size() == 2) cnt++;
    }
    
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}