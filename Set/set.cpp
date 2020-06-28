//Set is used to store unique elements in a sorted order by default ordered
//Red Black Trees is internally used so operations are O(logn)
//cannot update elements
#include<iostream>
#include<set>
using namespace std;

int main()
{
    int arr[]={10,20,30,11,9,8,11,10};
    int n=sizeof(arr)/sizeof(int);

    set<int> s;

    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);

    }

    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<",";
    }
    cout<<endl;
    s.erase(10);

    auto it=s.find(11);

    s.erase(it);
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<",";
    }

}
