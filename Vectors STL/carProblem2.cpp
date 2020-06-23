//Using vector of a custom class

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Car
{
public:
    int x,y;
    string name;

    Car(string name,int x,int y)
    {
        this->name=name;
        this->x=x;
        this->y=y;
    }
    int dist()
    {
        return x*x+y*y;
    }

};

bool compare(Car A,Car B)
{
    int da=A.dist();
    int db=B.dist();

    if(da==db)
    {
        return A.x<B.x;
    }
    return da<db;
}
int main()
{
    vector<Car> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string name;
        int x,y;
        cin>>name>>x>>y;
        Car temp(name,x,y);
        v.push_back(temp);
    }

    sort(v.begin(),v.end(),compare);

    for(auto c:v)
    {
        cout<<"Car "<<c.name<<" Dist "<<c.dist()<<" Location"<<c.x<<","<<c.y<<endl;
    }
}
