#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={20,30,40,40,40,50,100,1002};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;


    //adress of element >= key
    auto lb=lower_bound(arr,arr+n,key);
    cout<<"lower bound of "<<key<<" is "<<(lb-arr)<<endl;

    //adress of element > key
    auto ub=upper_bound(arr,arr+n,key);
    cout<<"upper bound of "<<key<<" is "<<(ub-arr)<<endl;

    cout<<"frequency of "<<key<<" is "<<(ub-lb)<<endl;
}
