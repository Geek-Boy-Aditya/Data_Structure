#include<iostream>
using namespace std;

int main ()
{
	int a[10][10]={0};
	int n,m;
	cin>> n>>m;
	int value =1;
	for (int row=0;row<=n-1;row++)
	{     
		for(int col =0;col<=m-1;col++)
		{  a[row][col]=value;
		     value++;
			
			cout<<a[row][col]<<" ";
		}
		 cout<<endl;
	}
	
	for (int col=0 ;col<m;col++)
	{
		if (col%2==0)
		// for even column Top to Down 
		{
			for (int row=0;row<n;row++)
			{
				cout<<a[row][col]<<" ";
			}
			
		}
		else 
		{
			// for Odd column Down to Top
			for (int row=n-1;row>=0;row--)
			{
				cout<<a[row][col]<<" ";
			}
		}
	}
}

 
