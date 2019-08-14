#include <stdio.h>
#include <iostream>
using namespace std;

int binary(int n)
{
	int f=0;
	int l=n;
	int an;
	while(f<=l)
	{
		int m=((f+l)/2);
		if(m*m==n)
		{
			return m;
			
		}
		else if((m*m)< n)
		{
			f=m+1;
			an=m;
		}
		else
		{
			l=m-1;
			
		}
		
}
return an;
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