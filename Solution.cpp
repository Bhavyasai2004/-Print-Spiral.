void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int left=0;
    int right = nCols-1;
    int top = 0;
    int bottom = nRows-1;
    //vector<int>ans;
    int a[nRows*nCols];
    int i;
    int t=0;
    while(left<=right && top<=bottom)
    {
        for(i=left;i<=right;i++){
           // ans.push_back(input[top][i]);
           //cout << input[top][i] << " ";
           a[t++]=input[top][i];
        }
        top++;
        if(top<=bottom)
        for(i=top;i<=bottom;i++)
        {
            //ans.push_back(input[i][right]);
            //cout << input[i][right] << " ";
            a[t++]=input[i][right] ;
        }
        right--;
        if(left<=right){
          for (i = right; i >= left; i--) {
           // ans.push_back(input[bottom][i]);
            //cout << input[bottom][i] << " ";
            a[t++]=input[bottom][i];
          }
          bottom--;
        }
        if (top <= bottom) {
          for (i=bottom;i>=top;i--)
          {
             // ans.push_back(input[i][left]);
             // cout << input[i][left] << " ";
              a[t++]=input[i][left];
          }
          left++;
        }
    }
    for(i=0;i<nCols*nRows;i++)
    cout << a[i] << " ";
   
}
