#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    priority_queue<float> pq;
    for (float i = 1; i <= n; i++)
    {
        pq.push(i);
    }

    cout << 2 << nl;
    while (pq.size() > 1)
    {
        float r = pq.top();
        pq.pop();
        float l = pq.top();
        pq.pop();
        cout << r << " " << l << nl;
        pq.push(round((l+r)/2));
    }
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
