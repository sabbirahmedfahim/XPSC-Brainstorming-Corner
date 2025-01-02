#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Observations:

Ther are 3 Scenarios:
1. Prime -> If n is a prime number, the second maximum GCD is always 1. Just pay 1 dollar!
2. Even  -> If n is even, the answer is always 2. 
3. Odd -> 2 sub-scenarios:
        i. If subtracting 2 from an odd number results in a prime number, then the answer is 2. 
           Example: For n = 21, subtracting 2 gives 19, which is a prime number. [21 = 19 + 2]
        ii. If subtracting 2 from an odd number does not result in a prime number:
            For example, let n = 27. Subtracting 2 gives 25, which is not a prime number.
            In such cases, subtract 3 to make it an even number. For n = 27, subtracting 3 gives 24.
            [24 + 3], so the answer is 2 + 1 = 3.
*/
bool isPrime(ll n)
{
    if(n == 1) return false;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n; cin >> n;

    if(isPrime(n)) cout << 1 << nl;
    else if(n%2 == 0) cout << 2 << nl;
    else
    {
        if(isPrime(n-2)) cout << 2 << nl;
        else cout << 3 << nl;
    }

    return 0;
}