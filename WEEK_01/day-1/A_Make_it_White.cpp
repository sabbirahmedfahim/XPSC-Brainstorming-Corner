#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n; string s;
    cin >> n >> s;
    int firstPos = -1, lastPos = -1;
    firstPos = s.find('B');
    lastPos = s.rfind('B');
    cout << lastPos - firstPos + 1 << endl;
}
int main() {
    int t; cin >> t;
    while(t--) solve(); 

    return 0;
}

// Naive approach
// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n; string s;
//     cin >> n >> s;
//     int firstPos = -1, lastPos = -1;
//     for(int i=0;i<n;i++) // O(n)
//     {
//         if(s[i] == 'B')
//         {
//             if(firstPos == -1) firstPos = i;
//             lastPos = i;
//         }
//     }
//     if(firstPos == -1) cout << 0 << endl;
//     else cout << lastPos - firstPos + 1 << endl;
// }
// int main() {
//     int t; cin >> t;
//     while(t--) solve(); // O(n²)

//     return 0;
// }