// must see the explanation tutorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int MOD = 1e9 + 7;
void solve() // O(n)
{
    int a, b; cin >> a >> b; int ans = 1; // amra iccha kore integer value nisi so that number thoery ta bujte pari
    for (int i = 0; i < b; i++) 
    {
        // ans = 1LL * ans * a; // integer overflow + 
        ans = (1LL * ans % MOD * a % MOD) % MOD; 
    }
    cout << ans << nl;
}
void solve2() // O(logN)
{
    int a, b; cin >> a >> b; int ans = 1; // amra iccha kore integer value nisi so that number thoery ta bujte pari
    
    while (b)
    {
        if(b & 1) 
        {
            ans = (1LL * ans % MOD * a % MOD) % MOD;
        }
        a = (1LL * a * a % MOD); 
        /*
        amra kintu every time a ke power kore dicchi either ans er shate multiply kori or not.
        because amader technique holo a er ei value ta hat e rakha for further process. Think bitwise
        */
        // b /= 2; // AC
        b >>= 1; // if you do not understand, take a minute, draw and fix! DOn'T worRy
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t; cin >> t; 
    while (t--) 
    {
        // solve(); // TLE
        solve2(); // AC
    }
 
    return 0;
}