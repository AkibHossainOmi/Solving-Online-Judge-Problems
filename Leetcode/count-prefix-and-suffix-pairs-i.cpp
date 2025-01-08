class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int res = 0;
        for (int wordIndex = 0; wordIndex < words.size(); wordIndex++) {

            for (int nextIndex = wordIndex + 1; nextIndex < words.size(); nextIndex++) {
                string word1 = words[wordIndex];
                string word2 = words[nextIndex];
                if (hasStarting(word2, word1) && hasEnding(word2, word1)) {
                    res++;
                }
            }
        }
        return res;
    }

    bool hasEnding(string const &fullString, string const &ending) {
        if (fullString.length() >= ending.length()) {
            return (0 == fullString.compare(fullString.length() - ending.length(), ending.length(), ending));
        } else {
            return false;
        }
    }

    bool hasStarting(string const &fullString, string const &prefix) {
        if (fullString.rfind(prefix, 0) == 0) {
            return true;
        } else {
            return false;
        }
    }
};