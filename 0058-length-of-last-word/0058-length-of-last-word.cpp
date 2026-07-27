class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
       int  n = s.length();
        int count =0;
        int i = 0;
        while(i < n && s[i] == ' ')
            i++;
        for(;i<n;i++)
        {
            
           count++;
           if (!isalnum(s[i]))
           {
            return count-1;
            break;
           }
        }
         return count;
        
    }
};