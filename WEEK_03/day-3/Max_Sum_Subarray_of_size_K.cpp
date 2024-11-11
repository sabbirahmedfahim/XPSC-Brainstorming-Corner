/*
class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        long long int mx, ans = 0;
        for(int i = 0; i < arr.size()-k+1; i++)
        {
            mx = 0;
            int l = i+k;
            for (int j = i; j < l; j++)
            {
                mx += arr[j];
            }
            // cout << mx <<nl;    
            ans = max(ans, mx);
        }
        return ans;
    }
};
*/