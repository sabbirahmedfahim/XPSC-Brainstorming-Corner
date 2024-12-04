//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& v, int k) {
        // code here
        int n = v.size();
        vector<long long int> prefSum(n);
        prefSum[0] = v[0];
        for (int i = 1; i < n; i++) prefSum[i] = prefSum[i-1] + v[i];
        
        map<long long int, long long int> mp;
        mp[0] = -1;
        long long int sum = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            sum = prefSum[i];
            if(mp.count(sum-k)) ans = max(ans, i - mp[sum-k]);
            if(!mp.count(sum)) mp[sum] = i;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends