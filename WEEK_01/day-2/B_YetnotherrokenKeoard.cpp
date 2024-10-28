#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    string s; cin >> s;
    deque<int> cap, sml;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'B')
        {
            s[i] = '#';
            if(!cap.empty())
            {
                s[cap.back()] = '#';
                cap.pop_back();
            }
        }
        else if(s[i] == 'b')
        {
            s[i] = '#';
            if(!sml.empty()) 
            {
                s[sml.back()] = '#';
                sml.pop_back();
            }
        }
        else
        {
            if(s[i] >= 'A' && s[i] <= 'Z') cap.push_back(i);
            else sml.push_back(i);
        }
    }
    for(auto data : s)
    {
        if(data != '#') cout << data;
    }
    cout << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}