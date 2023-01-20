#include<iostream>
using namespace std;

class proof
{
    protected:
    int a,b,c;

    public:

    void get(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
};

class compute : public proof
{
    public:
    void show()
    {
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a )
        cout<<"it is a right angled triangle "<<endl;
        else
        cout<<"it is not a right angled triangle "<<endl;
    }
};

int main()
{
    compute c;
    c.get(3,4,5);
    c.show();
    return 0;
}