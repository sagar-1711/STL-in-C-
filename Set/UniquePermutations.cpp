#include<iostream>
#include<set>
#include<string>
using namespace std;

void permute(char a[],int i,set<string> &s)
{
    if(a[i]=='\0')
    {
        //cout<<a<<endl;
        s.insert(a);
        return;
    }
    for(int k=i;a[k]!='\0';k++)
    {
        swap(a[i],a[k]);
        permute(a,i+1,s);
        //backtrack
        swap(a[i],a[k]);
    }



}
int main()
{
    char a[100];
    cin>>a;

    set<string> s;
    permute(a,0,s);
    //print all the strings
    for(auto str:s)
    {
        cout<<str<<endl;
    }


}
