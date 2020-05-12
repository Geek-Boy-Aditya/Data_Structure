#include<iostream>
using namespace std;

int main ()
{
	int  a[10]={1,2,3};
	
  //	size of array 
	     cout<<sizeof(a)<<endl;
	     int n =sizeof(a)/sizeof(int);
	      cout<<n<<endl;
	
	// Taking input from the user 
	     for (int i =0;i<5;i++)
	     {
	     	cin >>a[i];
		 }
	
	// updating the value 
	
	     a[4]=25;
	     
	// printing the elements of array of elements
	    for (int i=0; i<=n;i++)
	    {
		
	     cout<<a[i]<< endl;
	     
		 }
		 return 0;
}
