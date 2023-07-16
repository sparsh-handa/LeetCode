   
class Solution {
public:
    
   void dfs(int row, int col, vector<vector<int>>& image, vector<vector<int>>& ans, int delRow[], int delCol[], int newColor, int iniColor) {
    ans[row][col] = newColor;
    
    int n = image.size();
    int m = image[0].size();
    
    for (int i = 0; i < 4; i++) {
        int nRow = row + delRow[i];
        int nCol = col + delCol[i];
        
        if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && ans[nRow][nCol] == iniColor && ans[nRow][nCol] != newColor) {
            dfs(nRow, nCol, image, ans, delRow, delCol, newColor, iniColor);
        }
    }
}

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       
        
            
            int iniColor = image[sr][sc];
            
             vector<vector<int>> ans = image;
             
             int delRow[] = {-1,0,1,0};
             int delCol[] = {0,1,0,-1};
             
             dfs(sr,sc,image,ans,delRow,delCol,newColor,iniColor);
        
            return ans;
        
        
    }
};