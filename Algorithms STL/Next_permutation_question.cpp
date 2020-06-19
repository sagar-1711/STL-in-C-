#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

	int n,l;
	cin>>n;
    for(int k=0;k<n;k++)
	{
		cin>>l;
		int arr[l];
		for(int i=0;i<l;i++)
		{
			cin>>arr[i];
		}

		next_permutation(arr,arr+l);
		for(int i=0;i<l;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;

	}


	return 0;
}
