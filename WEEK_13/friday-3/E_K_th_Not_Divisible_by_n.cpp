#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
Let n = 3, then the count of numbers divisible by 3 from 1 to 17 is 17 / 3 = 5 values [easy].
*/
void solve()
{
    int n, k; cin >> n >> k;

    // int l = 1, r = 1E9, ans = -1;
    int l = 1, r = 2E9, ans = -1; // Understanding the search space is key for binary search :3
    while (l <= r)
    {
        int mid = l + (r-l)/2;
        if(mid - (mid/n) >= k)
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}