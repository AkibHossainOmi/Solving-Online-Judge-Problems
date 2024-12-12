class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> remaining;
        for(int i = 0; i < gifts.size(); i++)
        {
            remaining.push(gifts[i]);
        }
        while(k--)
        {
            int sqroot = sqrt(double(remaining.top()));
            remaining.pop();
            remaining.push(sqroot);
        }
        long long remained = 0;
        while (!remaining.empty()) 
        {
            remained += remaining.top();
            remaining.pop();
        }
        return remained;
    }
};