#include<iostream>
using namespace std;

int main ()
{
	int n ,key ;
	
	int a[1000];
	cout<<"Enter the number of elements:"<<endl;
	cin>> n;
           for (int i=0;i<n;i++)
           {
		
              cin>>a[i];
          }
	cout<<" Enter the element that you want to serach: ";
	cin>>key;
	int i;
	 for ( i =0;i<=n-1;i++)
	 {
	 	  if (a[i]==key )
	 	  {
	 	  	cout<<"Element"<< key<<"found at index"<<i;
	 	  	break;
		   }
	 }
	  if (i==n)
	  {
	  	 cout<<key <<"element not found";
	  }
	  return 0;
}
