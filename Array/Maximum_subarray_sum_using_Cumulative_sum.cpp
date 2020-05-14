#include<iostream>
using namespace std;

int main ()
{ 
int n;
cout<<"enter the no elements";
cin>>n; 
int a[10];
 cout<<"Enter the elements " ;
 int cumSum[1000]={0}; 
 cin>>a[0];
 cumSum[0]=a[0];
 for(int i=1;i<n;i++)
 {
 	cin>>a[i];
 	cumSum[i]=cumSum[i-1]+a[i];
 }
    
    int maximumSum=0;
	int currentSum=0; 
	int left=-1; 
	int right=-1;
for (int i=0;i<n;i++){

    //cout<< "first loop"<< i <<endl;
	for(int j=i;j<n;j++)
	
	{  
	   // cout<<"Loop of j "<< j <<endl;
	    // Elements of subarry(i,j)
	    currentSum=0; 
	    currentSum=cumSum[j]-cumSum[i-1];
	   
	   // update Maximum sum if cs>maximumsum
	     if (currentSum>maximumSum)
	     {
	     	maximumSum=currentSum; 
			 left=i;
			 right=j ;
		 }
  //	cout<<currentSum <<endl;
	}
}
cout<<" Maximum sum is"<<" "<<maximumSum << endl;
//print the subarray=
for(int k=left;k<=right;k++)
{
	cout<<a[k]<<",";
	
}
return 0;
} 
