class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string result;
        sort(nums.begin(), nums.end());
        if(stoi(nums[0], 0, 2)!=0)
        {
            result.assign(nums.size(),'0');
        }
        else
        {
            int number = stoi(nums[nums.size()-1], 0, 2)+1;
            int n = (int)(log2(number));
            result = bitset<64>(number).to_string().substr(64 - n - 1);
            if(result.size()>nums.size())
            {
                for(int i = 0; i < nums.size()-1; i++)
                {
                    int n1 = stoi(nums[i], 0, 2);
                    int n2 = stoi(nums[i+1], 0, 2);
                    if(n2-n1>1)
                    {
                        number = n1+1;
                        n = (int)(log2(number));
                        result = bitset<64>(number).to_string().substr(64 - n - 1);
                        break;
                    }
                }
            }
        }
        if(result.size()<nums.size())
        {
            int needed = nums.size() - result.size();
            while(needed--) result = '0' + result;
        }
        return result;
    }
};