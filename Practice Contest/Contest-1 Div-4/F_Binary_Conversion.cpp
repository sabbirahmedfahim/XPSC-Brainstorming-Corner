#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, k; string s1, s2; 
    cin >> n >> k >> s1 >> s2;
    int s1_0 = 0, s1_1 = 0, s2_0 = 0, s2_1 = 0;
    int dis = 0;
    for (int i = 0; i < n; i++)
    {
        s1[i] == '0' ? s1_0++ : s1_1++;
        s2[i] == '0' ? s2_0++ : s2_1++;
        s1[i] != s2[i] ? dis++ : dis;
    }
    if(s1_0 != s2_0 || s1_1 != s2_1 || k < dis/2)
    {
        cout << "NO" << nl; return;
    }
    if(k == dis/2)
    {
        cout << "YES" << nl; return;
    }
    cout << "DUE" << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}