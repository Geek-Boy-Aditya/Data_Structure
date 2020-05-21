#include<iostream>
using namespace std;
int main()
{
	char c[10][10];
	c[0][0]='A';//Assining  Particular value at index
	char b [][10]={{'a','b','c','\0'},{'d','e','f','g','\0'}};
	char a [][10]={"ab","def","ghi","hello"};
	cout<<a[2]<<endl;
	cout<<a[3]<<endl;
	return 0;
}
