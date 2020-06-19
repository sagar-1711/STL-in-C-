#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b)
{
    return (a>b);
}
int main()
{
    int arr[1000];
    int n;
    cin>>n;

    //adress of element >= key
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n,compare);
    //compare function will be called internally

    cout<<endl<<"sorted array is "<<endl;

    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<",";
    }
}
