#include<iostream>
using namespace std;

int main ()
{
	int a[10][10]={0};
	int n,m;
	cin>> n>>m;
	for (int row=0;row<=n-1;row++)
	{     
		for(int col =0;col<=m-1;col++)
		{
			
			cin>>a[row][col];
		}
		 
	}
}
