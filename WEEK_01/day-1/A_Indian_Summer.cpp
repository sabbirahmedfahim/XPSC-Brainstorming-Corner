#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    map<pair<string, string>, int> mp;
    int cnt = 0;
    while(t--)
    {
        string s1, s2; cin >> s1 >> s2;
        if(mp[{s1,s2}] == 0)
        {
            cnt++; mp[{s1,s2}]++;
        } 
    }
    cout << cnt << endl;

    return 0;
}
