#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
    return p1.second<p2.second;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        pair<int,int> p[n];

        for(int i=0;i<n;i++)
        {
            cin>>p[i].first>>p[i].second;
        }
        sort(p,p+n,compare);
        int count=1;
        int time=p[0].second;
        for(int i=1;i<n;i++)
        {
            if(p[i].first>=time)
            {
                time=p[i].second;
                count++;
            }

        }
        cout<<count<<endl;

    }
}
