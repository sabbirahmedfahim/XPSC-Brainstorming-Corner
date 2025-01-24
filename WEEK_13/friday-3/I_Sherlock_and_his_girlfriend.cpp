// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int N = 1E5;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    bool comp[N+1] = {0};
    for (ll i = 2; i <= N; i++)
    {
        if(comp[i]) continue;
        
        for (int j = i+i; j <= N; j+=i)
        {
            comp[j] = true;
        }
    }
    comp[1] = true; // because 1 is a non-prime number
    
    if(n <= 2) cout << 1 << nl;
    else cout << 2 << nl;
    
    for(int i=2; i<=n+1; i++)
    {
        if(!comp[i]) cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << nl;
    

    return 0;
}