#include <iostream>
#include<list>
using namespace std;

class Book
{
public:
    string name;
    int price;
    Book(string name,int price)
    {
        this->name=name;
        this->price=price;
    }
};

class BookCompare
{
    public:
        //overload operator ()
        bool operator()(Book A,Book B)
        {
            if(A.name==B.name)
            {
                 return true;
            }
            return false;
        }

};
//Templates+Iterators+Iterators
template<class ForwardIterator,class T,class Compare>
ForwardIterator search(ForwardIterator start,ForwardIterator end, T key,Compare cmp){

    while(start!=end){
        if(cmp(*start,key)){
            return start;
        }
        start++;
    }
    return end;
}

int main()
{



    Book b1("C++",138);
    Book b2("python",128);
    Book b3("java",130);

    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book b4("C++",110);

    BookCompare cmp;

    auto it = search(l.begin(),l.end(),b4,cmp);
    if(it==l.end()){
        cout<<"book not present";
    }
    else
    {
        cout<<"book present"<<endl;
    }


    return 0;
}
