#include<iostream>
#include<algorithm>
using namespace std;

 bool compare(int a,int b){
 
   return a<b;
}
   int main()
   {
   	  int n;
	  int a[100];
   	  cout<<"Enter the number of elements ";
   	  cin>>n;
   	  cout<<"Enter the elements:";
   	  for(int i=0;i<n;i++)
		 {
		 	 cin>>a[i];
		 }
		 
    sort(a,a+n );	
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
		 }	
		return 0; 
   }
