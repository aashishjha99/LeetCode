class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
    map<int,int> mp;
    set<int> st;
        
    for (auto x : arr) {

        mp[x]++;
    }
        
    for (auto u : mp)
    {
        st.insert(u.second);
    }
       
    if(mp.size()==st.size())
    {
        return true;
    }
        else
        {
            return false;
        }
        
    }
};