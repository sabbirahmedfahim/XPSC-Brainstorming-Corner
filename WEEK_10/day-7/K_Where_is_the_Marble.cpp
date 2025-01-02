#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    int k = 1;
    while (true)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0) break;
        vector<int> v(n); for(auto &data : v) cin >> data;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] > v[j]) swap(v[i], v[j]);
            }
        }
        cout << "CASE# " << k << ":" << nl;
        while (q--)
        {
            int begin = 0;
            int end = n - 1;
            int mid;
            int target;
            cin >> target;
            while (begin <= end)
            {
                mid = (begin + end) / 2;
                if (v[mid] == target)
                    break;
                else if (target > v[mid])
                {
                    begin = mid + 1;
                }
                else
                    end = mid - 1;
            }
            if (begin <= end && v[mid] == target)
            {
                if(mid - 1 >= 0 && v[mid-1] != v[mid])
                cout << target << " found at " << mid + 1 << nl;
                else
                {
                    for (int i = 0; i < n; i++)
                    {
                        if(v[i] == v[mid])
                        {
                            cout << target << " found at " << i + 1 << nl;
                            break;
                        }
                    }
                }
            }
            else cout << target << " not found" << nl;
        }
        k++;
    }

    return 0;
}