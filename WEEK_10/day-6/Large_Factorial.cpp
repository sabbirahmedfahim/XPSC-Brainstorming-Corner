#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int MOD = 1e9 + 7;
/* 
Why use 1e9 + 7 as MOD?

1. Prime Number:
   - 1e9 + 7 (1000000007) is a prime number.
   - Ensures every number modulo 1e9 + 7 has a multiplicative inverse, 
     which is essential for modular division and arithmetic.

2. Prevents Overflow:
   - Large numbers (e.g., in factorials or powers) can exceed data type limits.
   - Using modulo reduces results within [0, MOD - 1], avoiding overflow.

3. Large Enough:
   - MOD is approximately 1 billion, suitable for most competitive programming problems.
   - Helps minimize collisions when reducing numbers with % MOD.

4. Efficient for Computation:
   - 1e9 + 7 is close to 2^30, making modulo operations fast and efficient on modern CPUs.

Key Formula:
(a * b) % MOD = ((a % MOD) * (b % MOD)) % MOD
*/

void solve()
{
    int n; cin >> n; int ansWithoutMod = 1, ansUsedMod = 1;
    
    // modular multiplication
    /*
       (a*b)%mod
    => (a%mod * b%mod) % mod
    */
    for (int i = 1; i <= n; i++)
    {
    //    ansWithoutMod = ansWithoutMod * i;
       ansUsedMod = (1LL * ansUsedMod % MOD * i % MOD) % MOD; 
    //    cout << ansWithoutMod << " " << ansUsedMod << nl; // commnet-out this to understand the benefit of MOD
    }
   cout << ansUsedMod << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}