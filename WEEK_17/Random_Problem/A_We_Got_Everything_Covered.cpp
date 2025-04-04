#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    while (n--) 
    {
        char c = 'a';
        for (int i = 0; i < k; i++) 
        {
        cout << c++ ;
        }
 
    }
    cout << nl;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) 
    {
        solve();
    }

    return 0;
}