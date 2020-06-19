#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);

    rotate(arr,arr+3,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Apply same on vctor
    vector<int> v={1,2,3};
    rotate(v.begin(),v.begin()+3,v.end());

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    //Next permutation-> generates next greater sequence
    vector<int> m={1,2,3};
    next_permutation(m.begin(),m.end());

    //for each loop
    for(int x:m)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    next_permutation(m.begin(),m.end());
    for(int x:m)
    {
        cout<<x<<" ";
    }

    cout<<endl;
    next_permutation(m.begin(),m.end());
    for(int x:m)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    next_permutation(m.begin(),m.end());
    for(int x:m)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    next_permutation(m.begin(),m.end());
    for(int x:m)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    next_permutation(m.begin(),m.end());
    for(int x:m)
    {
        cout<<x<<" ";
    }
}
