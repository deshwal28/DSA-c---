#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main()
{
    //create 2D vector
    int n,m;
    cout<<"Enter rows and col: ";
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m,1));
    //for(int i=0;i<3;i++)
    //for(int j=0;j<4;j++)
    //cout<<matrix[i][j]<<" ";

    //cout<<"Rows = "<<matrix.size();
    //cout<<endl;
    //cout<<"cols = "<<matrix[0].size();

    for(int i=0;i<n;i++)
    for(int j =0;j<n;j++)
    cin>>matrix[i][j];

    for(int i = 0 ;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }



}