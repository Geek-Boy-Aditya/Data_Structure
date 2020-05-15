#include<iostream>
using namespace std;

int main ()
{
	int a[3][3]={0};
	for (int row=0;row<=2;row++)
	{     
		for(int col =0;col<=2;col++)
		{
			
			cout<<a[row][col]<<" ";
		}
		 cout<<endl;
	}
}
