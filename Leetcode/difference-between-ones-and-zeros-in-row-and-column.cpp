class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& grid)
    {
        vector<vector<int>> gridT;
        for(int i=0; i<grid[0].size(); i++)
        {
            vector<int> row;
            for(int j=0; j<grid.size(); j++)
            {
                row.push_back(grid[j][i]);
            }
            gridT.push_back(row);
        }
        return gridT;
    }
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>> diff = grid, gridT = transpose(grid);
        int oneRow[100001] = {}, oneCol[100001] = {}, zeroRow[100001] = {}, zeroCol[100001] = {};
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]) oneRow[i]+=grid[i][j];
                else zeroRow[i]++;
            }
        }
        for(int i=0; i<gridT.size(); i++)
        {
            for(int j=0; j<gridT[i].size(); j++)
            {
                if(gridT[i][j]) oneCol[i]+=gridT[i][j];
                else zeroCol[i]++;
            }
        }
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                // cout<<oneRow[i] << " " << oneCol[j] << " " << zeroRow[i] << " " << zeroCol[j]<<endl;
                diff[i][j] = oneRow[i] + oneCol[j] - zeroRow[i] - zeroCol[j];
            }
        }
        return diff;
    }
};