#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
	int i,n;
	cout<<"enter n";
	cin>>n;
	int a[n];
	cout<<"enter array elements \n";
	for(i=0;i<n;i++)
		cin>>a[i];
	int l;
	l=a[0];
	for(i=1;i<n;i++)
	{
		if(l<a[i])
			l=a[i];
		
	}
	cout<<"largest element: "<<l<<endl;
}