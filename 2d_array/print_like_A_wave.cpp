vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>vec;
    for(int col=0;col<mCols;col++)
    {
        for(int row=0;row<nRows;row++)
        {
            if(col%2==0)
                vec.push_back(arr[row][col]);
            else
                vec.push_back(arr[nRows-row-1][col]);
        }
    }
    return vec;
    //Write your code here
}