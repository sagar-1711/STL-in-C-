template<typename T>
class Vector
{
    int cs;//current size
    int ms;//max size
    T *arr;

public:
    Vector()
    {
        cs=0;
        ms=1;
        arr=new T[ms];
    }
    void push_back(const T d)
    {
        if(cs==ms)
        {
            //array is full
            T*oldArr=arr;
            ms=2*ms;
            arr=new T[ms];
            //copy elements into arr
            for(int i=0;i<cs;i++)
            {
                arr[i]=oldArr[i];
            }
            //clear the memory
            delete [] oldArr;

        }
        arr[cs]=d;
        cs++;

    }

    void pop_back()
    {
        cs--;
    }

    T front() const
    {
        return arr[0];

    }

    T back() const
    {
        return arr[cs-1];
    }

    bool empty() const
    {
        return cs==0;
    }

    int capacity() const
    {
        return ms;
    }

    T at(const int i)
    {
        return arr[i];
    }


    int size() const
    {
        return cs;
    }
    //operator overloading

    T operator[](const int i)
    {
        return arr[i];
    }

};
