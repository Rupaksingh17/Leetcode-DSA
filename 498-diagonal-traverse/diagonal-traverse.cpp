 class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans;
        int i=0 , j=0;
        int dir = 1;
        for(int k=0; k<m*n; k++){
            ans.push_back(mat[i][j]);
            if( dir ==1){
                if( j == m-1){
                    i++;
                    dir = 0;
                }
                else if(i == 0){
                    j++;
                    dir = 0;
                }
                else{
                    i--;
                    j++;
                }
            }
            else{
                if(i == n-1){
                    j++;
                    dir = 1;
                }
                else if( j == 0){
                    i++;
                    dir = 1;
                }
                else
                {
                    i++;
                    j--;
                }
            }
        }    
        return ans;
    }   
};