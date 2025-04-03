class Solution {
public:
    int firstUniqChar(string s) {
        map <char,int> mpp;
        vector <char> s2;

        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;

        }
    
      
        for(auto it:mpp)
        {
           if(it.second==1)
           {
              s2.push_back(it.first);
           }
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(find(s2.begin(),s2.end(),s[i])!=s2.end())
            {
                return i;
                break;
            }
        }
        return -1;
    }
};
