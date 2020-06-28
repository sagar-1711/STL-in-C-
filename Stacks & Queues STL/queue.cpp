#include <iostream>
#include<queue>
using namespace std;


int main() {

    queue<int> q;

    for(int i=0;i<=5;i++){
        q.push(i);
    }

    //Loop
    while(!q.empty()){
        cout<<q.front()<<" ,";
        q.pop();
    }

    return 0;
}
