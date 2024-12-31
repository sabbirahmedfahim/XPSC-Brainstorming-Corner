#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std; 
/*
Observations:
1. The count of values between 1 and n that are divisible by a is n/a.
2. Similarly, the count of values between 1 and n that are divisible by b is n/b.

Example:
Let n = 20, a = 2, b = 3.

- Divisible by a: 20 / 2 = 10
- Divisible by b: 20 / 3 = 6

Numbers between 1 and 20:
1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20

- Divisible by a:  1 (2) 3 (4) 5 (6) 7 (8) 9 (10) 11 (12) 13 (14) 15 (16) 17 (18) 19 (20) => 10
- Divisible by b:  1  2 (3) 4  5 (6) 7  8 (9) 10  11 (12) 13  14 (15) 16  17 (18) 19  20  => 6

The total count of numbers between 1 and n divisible by both a and b is -> n / lcm(a, b) = 20 / 6 = 3.  ***

- Divisible by both a and b:
  1  2  3  4  5 (6) 7  8  9  10  11 (12) 13  14  15  16  17 (18) 19  20 => 3
*/

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n, a, b, p, q; cin >> n >> a >> b >> p >> q;

    ll LCM = (a/__gcd(a, b))*b;
    ll x = p*(n/a), y = q*(n/b), overlapKorse = n/LCM;
    
    ll similarTaiBadDibo = overlapKorse * (p+q), maxThekeAddKorbo = overlapKorse * max(p, q);
    ll ans = (x+y) - similarTaiBadDibo + maxThekeAddKorbo;

    // cout << x << " " << y << nl;
    cout << ans << nl;

    return 0;
}