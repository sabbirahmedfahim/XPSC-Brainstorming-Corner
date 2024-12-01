/*
class Solution {
  public:
    int longestKSubstr(string &s, int k) 
    {
        // your code here
    int l = 0, r = 0;
    map<char, int> mp;
    int ans = -1;
    while (r < s.size())
    {
        mp[s[r]]++;
        if(mp.size() == k) ans = max(ans, r-l+1);
        else
        {
            while (mp.size() > k && l <= r) 
            {
                mp[s[l]]--;
                if(mp[s[l]] == 0) mp.erase(s[l]); 
                l++;
            }
        }
        r++;
    }
    return ans;
    }
};
*/