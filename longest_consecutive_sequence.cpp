class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      
        map<int, int> mpp;
        for (int i=0;i<nums.size();i++)
         {
            mpp[nums[i]] = 1;
         } 

        int longestStreak = 0;

        for (auto& it : mpp) {
            int m = it.first;

           
            if (mpp.find(m - 1) == mpp.end()) {
                int n = m;
                int currentStreak = 1;

               
                while (mpp.find(n + 1) != mpp.end()) {
                    n++;
                    currentStreak++;
                }

                longestStreak = max(longestStreak, currentStreak);
            }
        }
        return longestStreak;
    }
};
