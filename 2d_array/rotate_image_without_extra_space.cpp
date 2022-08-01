class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
        for(int j=i;j<m;j++)
        {
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
            
        }
    }

    for(int k=0;k<n;k++)
    {
        int j=0;
        while(j<n/2)
        {
            int temp=matrix[k][j];
            matrix[k][j]=matrix[k][m-j-1];
            matrix[k][m-j-1]=temp;
            j++;
        }
        
    }
    }
};