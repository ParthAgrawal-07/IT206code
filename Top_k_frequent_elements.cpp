class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> v1; 
        map<int, int> mpp; 

       
        for (int i = 0; i < nums.size(); i++)
            mpp[nums[i]]++;

      
        vector<pair<int, int>> v2;
        for (auto it : mpp)
            v2.push_back(make_pair(it.second, it.first)); 
        
        sort(v2.rbegin(), v2.rend()); 

      
        for (int i = 0; i < v2.size() && k != 0; i++) {
            v1.push_back(v2[i].second); 
            k--; 
        }

        return v1;
    }
};
