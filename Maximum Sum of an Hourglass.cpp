class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        
       int m=grid.size();
       int n=grid[0].size();
        int max_till=0, count=0;
        
        for(int row=1;row<m-1;++row)
        {
            for(int col=1; col<n-1;++col)
            {
                count = grid[row][col] + grid[row-1][col-1] + grid[row-1][col]+grid[row-1][col+1]+grid[row+1][col-1]+grid[row+1][col]+grid[row+1][col+1];
                max_till=max(max_till, count);
            }
        }
        
        return max_till;
        
    }
};
