#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, k; string s; cin >> n >> k >> s;

    int cnt = 0;
    for (int i = 0; i < n;)
    {
        if(s[i] == 'B')
        {
            i += k; cnt++;
        }
        else i++;
    }
    cout << cnt << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}