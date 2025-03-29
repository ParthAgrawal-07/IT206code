class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map <int,int> mpp;
        int a,b;
        vector <int> vec;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]+=i;
        }
        
        for(auto it:mpp)
        {
            if(mpp.find(target - it.first)!=mpp.end())
            {
                a= it.first;
                b= target - it.first;
            }
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==a || nums[i]==b)
            {
                vec.push_back(i);
            }
        }
       return vec;
  }
};
