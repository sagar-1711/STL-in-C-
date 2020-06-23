//Vector is dynamic array that can grow or shrink in size
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    //vector with 5 integers having 10 as value
    vector<int> b(5,10);

    vector<int> c(b.begin(),b.end());

    vector<int> d{1,2,3,10,14};

    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;

    for(auto it=b.begin();it!=b.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(int x:d)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
        //doubling of memory happens
    }
    for(int x:v)
    {
        cout<<x<<" ";
    }

    cout<<endl;


    //Understand at memory level what are differences in v & d
    cout << v.size() << endl;
    cout << v.capacity() << endl; //size of underlying array
    cout << v.max_size() << endl; // maximum no of elements a vector can hold in the worst case acc to avbl memory in the system


    cout << d.size() << endl;
    cout << d.capacity() << endl; //size of underlying array
    cout << d.max_size() << endl; // maximum no of elements a vector can hold in the worst case acc to avbl memory in the system




    return 0;
}
