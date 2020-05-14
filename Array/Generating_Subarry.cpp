#include<iostream>
using namespace std;

int main ()
{ 
int n;
cout<<"enter the no elements";
cin>>n; 
int a[10];
 cout<<"Enter the elements " ;
 for(int i=0;i<n;i++)
 {
 	cin>>a[i];
 }
    
for (int i=0;i<n;i++){

    //cout<< "first loop"<< i <<endl;
	for(int j=i;j<n;j++)
	
	{  
	   // cout<<"Loop of j "<< j <<endl;
	    // Elements of subarry(i,j)
	    
	   for (int k=i;k<=j;k++)
	   {
	   	  cout<< a[k]<<" ,";
	   //	cout <<" loop of k"<< k <<endl;
	   }
	   cout<<endl;
  //	cout<<currentSum <<endl;
	}
}
}
