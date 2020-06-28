// pair of (i,j) such that a[i]+a[j]>b[i]+b[j] && i<j
//=>a[i]-b[i]>b[j]-a[j]
//=>c[i]>-c[j]

#include<bits/stdc++.h>
#include<iostream>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update> PBDS;

int main()
{


    int n;
    cin>>n;

    int a[n],b[n],c[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<n;i++)
    {
        c[i]=a[i]-b[i];
    }



    PBDS st;
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(st.size()-st.order_of_key({-c[i],1000000}));
        st.insert({c[i],i});
    }
    cout<<ans<<endl;


}
