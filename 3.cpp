#include<iostream>
using namespace std;

class item{
    int a;
    
    public:
    
    item(){}
    item(int a){ this->a=a;}

    void show(){ cout<<"item is -> "<<a<<endl; }

    friend void swap(item*,item*);
    
};

void swap(item *a,item*b)
{
    item temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    item i1(5),i2(3);
    i1.show();
    i2.show();

    cout<<"after swapping"<<endl;
    swap(&i1,&i2);
    
    i1.show();
    i2.show();
}

