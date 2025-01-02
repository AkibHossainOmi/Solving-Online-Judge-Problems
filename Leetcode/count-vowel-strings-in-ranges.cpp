class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        
        vector<int> v(words.size() + 1, 0);

        for (int wordIndex = 0; wordIndex < words.size(); wordIndex++) 
        {
            const string& word = words[wordIndex];
            char firstChar = word[0];
            char lastChar = word.back();
            v[wordIndex + 1] = v[wordIndex] + (vowels.find(firstChar) != vowels.end() && vowels.find(lastChar) != vowels.end());
        }

        vector<int> ans;
        ans.reserve(queries.size());
        for (const auto& query : queries) 
        {
            int left = query[0];
            int right = query[1];
            ans.push_back(v[right + 1] - v[left]);
        }

        return ans;
    }
};