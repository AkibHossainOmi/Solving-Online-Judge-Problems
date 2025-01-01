class Solution {
public:
    int maxScore(string s) {
        int sd[500+1];
        int ssd[500+1] = {};
        int score = 0;
        for(int i = 0; i < s.length(); i++)
        {
            sd[i] = s[i] - 48;
            ssd[i+1] = ssd[i] + sd[i];
        }
        for(int i = 1; i < s.length(); i++)
        {
            int leftZeros = i - ssd[i];
            // int leftOnes = ssd[i];
            // int rightZeros = (s.length() - i) - (ssd[s.length()] - ssd[i]);
            int rightOnes = (ssd[s.length()] - ssd[i]);
            // printf("%d %d\n",leftZeros, leftOnes);
            // printf("%d %d\n",rightZeros, rightOnes);
            score = max(score, (leftZeros + rightOnes));
            // printf("%d\n", score);
        }
        return score;
    }
};
