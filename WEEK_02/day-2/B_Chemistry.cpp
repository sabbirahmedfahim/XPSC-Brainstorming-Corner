#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, k; string s; cin >> n >> k >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) mp[s[i]-'a']++;
    int cnt_odd = 0;
    for (int i = 0; i < 26; i++) if(mp[i]%2) cnt_odd++;
    
    cout << ((cnt_odd-k <= 1)? "YES" : "NO" ) << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}