

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();

        // Case 1: All uppercase
        bool allUpper = true;
        for (int i = 0; i < n; i++) {
            if (!isupper(word[i])) {
                allUpper = false;
                break;
            }
        }

        // Case 2: All lowercase
        bool allLower = true;
        for (int i = 0; i < n; i++) {
            if (!islower(word[i])) {
                allLower = false;
                break;
            }
        }

        // Case 3: First uppercase, rest lowercase
        bool firstUpper = isupper(word[0]);
        for (int i = 1; i < n; i++) {
            if (!islower(word[i])) {
                firstUpper = false;
                break;
            }
        }

        return allUpper || allLower || firstUpper;
    }
};