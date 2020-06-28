#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

void print(priority_queue<int,vector<int>,greater<int>> pq)
{
    while(!pq.empty())
    {
        cout<<pq.top()<<",";
        pq.pop();
    }
    cout<<endl;

}
int main()
{
    int no;
    priority_queue<int,vector<int>,greater<int>> pq;//min priority queue
    int cs=0;
    int k=3;// 3 largest elements till now;
    while(scanf("%d",&no)!=EOF)
    {
        if(no==-1)
        {
            print(pq);
        }
        else if(cs<k)
        {
            pq.push(no);
            cs++;
        }
        else if(no>pq.top())
        {
            pq.pop();
            pq.push(no);
        }
    }

};
