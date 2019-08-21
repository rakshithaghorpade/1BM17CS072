#include<iostream> 
#include<algorithm> 
using namespace std; 
  

int kthSmallest(int arr[], int n, int k) 
{ 
     for(int i=0;i<=k;i++)
	 {
		 int min=i;
		 for(int j=i+1;j<n;j++)
		 {
			 if(arr[j]<arr[min])
				 min=j;
		 }
		 swap(arr[i],arr[min]);
	 }
	 return arr[k-1];
} 
  
 
int main() 
{ 
	int n;
	cout<<"enter n: ";
	cin>>n;
    int arr[n];
	for (int i=0;i<n;i++)
		cin>>arr[i];
    n = sizeof(arr)/sizeof(arr[0]);
	int k;
	cout<<"enter k: ";
	cin>>k;
    cout << "K'th smallest element is " <<  kthSmallest(arr, n, k); 
    return 0; 
} 