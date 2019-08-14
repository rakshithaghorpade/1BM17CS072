#include <stdio.h>
#include <iostream>
using namespace std;

int binary(int n)
{
	int f=0;
	int l=n;
	while(f<=l)
	{
		int m=((f+l)/2);
		if(n==m*m)
		{
			return m;
			break;
		}
		else if(n<m*m)
			l=m-1;
		else
		f=m+1;
	}
}

int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	if(n<0)
		cout<<"imaginary\n";
	cout<<binary(n)<<endl;
	
	
}