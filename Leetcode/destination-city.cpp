class Solution {
public:
    string lastCity(unordered_map<string, string>& chain, string firstCity)
    {
        if(chain[firstCity]=="") return firstCity;
        else return lastCity(chain, chain[firstCity]);
    }
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> chain;
        for(int i=0; i<paths.size(); i++)
        {
            chain[paths[i][0]] = paths[i][1];
        }
        return lastCity(chain, paths[0][0]);
    }
};