/*
class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) 
    {
        // code here
      long long mx = 0;
      for (int i = 0; i < k; i++)
      {
         mx += arr[i];
      }
      
      long long ans = mx;

      for (int i = k, j = 0; i < arr.size(); i++, j++) 
      {
        // cout << mx << nl;
         mx += arr[i];
         mx -= arr[j];
         ans = max(ans, mx);
      }

      return ans;
    }
};
*/