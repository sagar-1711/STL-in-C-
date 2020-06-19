#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={1,10,11,9,100};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    bool present=binary_search(arr,arr+n,key);
    //return 1 or 0
    if(present)
    {
        cout<<"present";
    }
    else
    {
        cout<<"not present";
    }

}
