class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
    vector<int> ans;
    map<int, int> mp;

    for (auto itr : nums)
    {

        mp[itr]++;
    }

    for (auto x : mp)
    {

        if (x.second > 1)
        {
            ans.push_back(x.first);
        }
    }

        return ans;
        
        
    }
};