class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int>ans;
        int row=matrix.size(),col=matrix[0].size();
        int top=0,bottom=row-1,right=col-1,left=0;
        while(left<=right&&top<=bottom)
        {
            for(int j=left;j<=right;j++)
            ans.push_back(matrix[top][j]);
            top++;
            for(int k=top;k<=bottom;k++)
            ans.push_back(matrix[k][right]);
            right--;
            if(top<=bottom){
            for(int j=right;j>=left;j--)
            ans.push_back(matrix[bottom][j]);
            bottom--;}
            if(left<=right){
            for(int k=bottom;k>=top;k--)
            ans.push_back(matrix[k][left]);
            left++;
            }

        }
   return ans;
    }
};