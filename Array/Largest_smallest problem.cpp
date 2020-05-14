#include<iostream>
#include<climits>
using namespace std;

int main ()
{
	int n,a[10];
	 cout<<"Enter the number of elemnts ";
	 cin>> n;
	  for (int i =0;i<n;i++)
	  {
	  	cin>>a[i];
	  }
	  
	   int largest= INT_MIN;
	   int smallest=INT_MAX;
	   
	   for (int i=0;i<n;i++)        // At  the place of this we can use 
	                                // for(inyt i=0;i<n ;i++)
	                                 //{
	      {                         //  largest =max(largest ,a[i]);
	      	if (a[i]> largest)       // smallest =min (smallest,a[i]);
	      	   {                     //}
	      	   	largest=a[i];
				 }
				 
			 if (a[i]< smallest)
			 {
			 	smallest=a[i];
				  }	 
		  }
		  cout<<"Largest element is -->"<<largest<<endl<<"Smallest element is -->"<<smallest;
		  return 0;
}
