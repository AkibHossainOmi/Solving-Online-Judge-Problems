class Solution {
 public:
  int countPalindromicSubsequence(string s) {
    int result = 0;
    unordered_map<char, int> first_position, last_position;

    for (int i = 1; i <= s.size(); ++i) {
      if (first_position[s[i - 1]] == 0) {
        first_position[s[i - 1]] = i;
      }
      last_position[s[i - 1]] = i;
    }

    for (const auto& entry : first_position) {
      char letter = entry.first;
      int first = entry.second;
      int last = last_position[letter];

      unordered_set<char> present;

      for (int j = first; j < last - 1; ++j) {
        present.insert(s[j]);
      }

      result += present.size();
    }

    return result;
  }
};