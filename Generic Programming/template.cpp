#include<iostream>
using namespace std;


//template
template<typename T>

int search(T arr[],int n,T key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return n;
}

int main()
{
    int a[]={1,2,3,4,10,12};
    int n=sizeof(a)/sizeof(int);
    cout<<search(a,n,10)<<endl;

    float b[]={1.1,1.2,1.3,1.4};
    float k=1.2;
    cout<<search(b,4,k)<<endl;


}
