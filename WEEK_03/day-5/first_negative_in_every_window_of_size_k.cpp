/*
class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        vector<int> ans;
        int n = arr.size();
        for (int i = 0; i < n-k+1; i++)
        {
            int firstNeg = 0;
            for (int j = i; j < i+k; j++)
            {
            if(firstNeg == 0 && arr[j] < 0) 
            {
                firstNeg = arr[j]; break;
            }
            }
            ans.push_back(firstNeg);
        }
        return ans;
    }
};
*/