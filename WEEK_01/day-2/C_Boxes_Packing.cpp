#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int n; cin >> n;
    map<int, int> mp;
    int mx = -1;
    while(n--)
    {
       int data; cin >> data;
       mp[data]++;
       mx = max(mx, mp[data]);
    }
    cout << mx << nl;

    return 0;
}