#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    int path[row][col];
    for(int j=0;j<col;j++)
        path[0][j]=1;
    for(int i=1;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>=arr[i-1][j])
                path[i][j]=path[i-1][j];
            else
            {
                path[i][j]=i+1;
            }
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int row1,row2,j;
        cin>>row1>>row2;
        for(j=0;j<col;j++)
        {
            if(path[row2-1][j]<=row1)
            {
                cout<<"Yes\n";
                break;
            }
        }
        if(j==col)
            cout<<"No\n";
    }
    return 0;
}
