#include<iostream>
using namespace std;

void Insertion_sort(int arr[],int n)
{      
     for(int i=1;i<=n-1;i++)
     {
	 
       int e=arr[i];
       // Place the current element at right poisition in array
	   int j=i-1;
	   while(j>=0 and arr[j]>e)
	   {
	   	  cout<<" while condition";
	   	  arr[j+1]=arr[j];
	   	   j=j-1;
	   	}
	   
	   arr[j+1]=e; 	
     }
} 

int main ()
{
	  int n ;
	int a[100];
	cout<<"Enter  the number of elemets:"<<endl;
	cin>>n;
	cout<<"Enter the elements:"<<endl;
	 for(int i=0;i<n;i++)
	 {
	 	 cin>>a[i];
	 }
	 
	Insertion_sort(a,n);
	for (int i=0;i<n;i++)
	      {
	           cout<<a[i]<<" ,";
			   	
		  }
	return 0;
	  
}
