#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    // input part
    int n, m; cin >> n >> m;
    string s; cin >> s;
    // vector<int> v(m);
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        int data; cin >> data; data--;
        // v[i] = data;
        st.insert(data);
    }
    string c; cin >> c;

    // operation part
    vector<char> charStore;
    for(auto data : c) charStore.push_back(data);
    sort(charStore.rbegin(), charStore.rend());
    map<int, char> mp;
    int sz = st.size();
    for (int i = 0; i < sz; i++)
    {
        // charStore er shob gula char ke v[i] e link korbo so that s -> char update korte pari
        auto it = st.begin();
        mp[*it] = charStore.back();
        st.erase(st.begin());
        charStore.pop_back();
    }
    
    for(auto [key, val] : mp)
    {
        s[key] = val;
    }
    cout << s << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}