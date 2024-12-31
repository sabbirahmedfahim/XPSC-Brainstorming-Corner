#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n, k; cin >> n >> k;
    vector<ll> divisors;
    for (ll i = 1; i * i <= n; i++)
    {
        if(n%i == 0) 
        {
            divisors.push_back(i);
            if(i != (n/i)) divisors.push_back(n/i);
        }
    }
    sort(all(divisors));
    if(divisors.size() >= k) cout << divisors[k-1] << nl;
    else cout << -1 << nl;

    return 0;
}