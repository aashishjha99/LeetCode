class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
          int n = arr.size();
        unordered_map<int,int>umap;
        set<int> mset;
        for(int i=0;i<n;i++)
        {
            umap[arr[i]]++;
        }
        auto itr = umap.begin();
        
        for(auto it:umap)
        {
            mset.insert(it.second);
        }
        if(umap.size() == mset.size())
            return true;
        
        return false;
    }
       
};