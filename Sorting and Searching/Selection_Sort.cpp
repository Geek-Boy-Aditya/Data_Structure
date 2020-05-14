#include<iostream>
using namespace std;
// Selection sort 
void Selection_sort (int a[],int n)
{
	for (int i =0;i<n-1;i++)
	{    
	// find out the shortest element in the sorted array 
	     int min_index=i; // that denotes what the min index of the element
		for (int j=i;j<=n-1;j++)
		{
			if (a[j]<a[min_index])
			{
				min_index=j;
				
			}
		}
		// After this Loop we swap Finally 
		cout<<"swap"<<" "<<a[min_index] <<endl;
		swap (a[i],a[min_index]);
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
	 
	Selection_sort(a,n);
	for (int i=0;i<n;i++)
	      {
	           cout<<a[i]<<" ,";
			   	
		  }
	return 0;
} 
