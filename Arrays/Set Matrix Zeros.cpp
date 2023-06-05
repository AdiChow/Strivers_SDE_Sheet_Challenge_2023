#include <bits/stdc++.h>
void setzero(vector<vector<int>> &matrix,int r ,int c)
{
	int n=matrix.size(),m=matrix[0].size();
    for(int j=0;j<m;j++)
	matrix[r][j]=0;
	for(int i=0;i<n;i++)
	matrix[i][c]=0;
			

}

void setZeros(vector<vector<int>> &matrix)
{
	
	int r=matrix.size(),c=matrix[0].size();
	int a[r][c];
	for(int i=0;i<matrix.size();i++)
	{  
		for(int j=0 ; j<matrix[0].size();j++)
	   {    a[i][j]=0;
			if (matrix[i][j]==0)
			{a[i][j]=1;
			}

		}
	}

	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0 ; j<matrix[0].size();j++)
		{
			if (matrix[i][j]==0 && a[i][j]==1)
			 {
				 setzero(matrix,i,j);}
		}
	}
	
	
}