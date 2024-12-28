// it's easy to rewatch the solution video if you do not understand
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
findings: 
x ^ y = z
x ^ z = y
y ^ z = x
*/
const int maxN = (1ll << 15); // this is the key, very small value gives opportunity to reduce TLE
vector<int> all_palindrome; 
bool is_palindrome(int n) 
{
    string s = to_string(n); // easily string diye kaj kora jay ejonno string e convert kore nilam
    string tmp = s; reverse(all(tmp));
    return s == tmp;
}
void markPalindromes() // generating palindromes before operations
{
    for (int i = 0; i < maxN; i++)
    {
        if(is_palindrome(i)) all_palindrome.push_back(i);
    }
}
void solve()
{
    int n; cin >> n; vector<ll> v(n), cnt(maxN + 1); 
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; cnt[v[i]]++;
    }
    ll ans = n; // no zero

    // cout << all_palindrome.size() << nl;
    // ans = 0;
    // for (int i = 0; i < n; i++) // TLE code but good for basics
    // {
    //     for (int j = i; j < n; j++) 
    //     {
    //         // cout << (v[i] ^ v[j]) << nl;
    //         // if(is_palindrome((v[i]^v[j]))) cnt++;
    //         if(st.count(v[i]^v[j])) cnt++;
    //     }
    // }

    for (int i = 0; i < n; i++) // O(n*500) -> approx. 500
    {
        for (int j = 0; j < all_palindrome.size(); j++) // O(approx. 500)
        {
            int cur = (v[i]^all_palindrome[j]); 
            ans += cnt[cur];
        }
    }   
    cout << ans/2 << nl; // Each pair is counted twice, so divide by 2 (do not understand)
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    markPalindromes(); // generate palindromes at once to reduce tle
    int t; cin >> t; 
    while (t--) solve();

    return 0;
}