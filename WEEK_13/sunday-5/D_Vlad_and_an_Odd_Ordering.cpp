// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    int tmp = n;
    if(tmp&1) tmp = n+1;

    if(tmp/2 >= k) // odd num
    {
        cout << 1 + (k-1) * 2 << nl; // it will work for detecting odd numbers
    }
    else // even (from 2 to 1E9 without odd) [well, it will work for both odd, even. just seperated to use the odd formulla at O(1)]
    {
        for (int bit = 0; bit < 31; bit++)
        {
            // cout << (1<<bit) <<" ";
            int i = (1<<bit);
            int x = n/i; // formulla :)
            int cnt = (x+1)/2; // formulla :)
            if(cnt >= k) // paisi
            {
                cout << (2*k-1) * i << nl; return; // formulla :)
            }
            else // ja count korsi egula k theke bad diye dibo
            {
                k -= cnt;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}