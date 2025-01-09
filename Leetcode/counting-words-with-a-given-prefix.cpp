class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res = 0;
        for(int wordIndex = 0; wordIndex < words.size(); wordIndex++)
        {
            if(hasStarting(words[wordIndex], pref))
            {
                res++;
            }
        }
        return res;
    }

    bool hasStarting(string const &fullString, string const &prefix) {
        if (fullString.rfind(prefix, 0) == 0) {
            return true;
        } else {
            return false;
        }
    }
};
