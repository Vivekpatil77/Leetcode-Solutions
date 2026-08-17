class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        bool allUpper = true;
        for(int i = 0;i<n;i++)
        {
            if(!isupper(word[i]))
            {
                allUpper =  false;
                break;
            }
        }
        bool allLower = true;
        for(int i = 0;i<n;i++){
            if(!islower(word[i]))
            {
                allLower = false;
                break;
            }
        }
        bool firstUpper = isupper(word[0]);
        for(int i=1;i<n;i++){
            if(!islower(word[i]))
            {
                firstUpper = false;
                break;
            }
        }
        
        return allUpper || allLower || firstUpper;;
        
    }
};