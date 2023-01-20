#include<iostream>
using namespace std;

class Matrix{
    protected:
    int a,b,c,d;
    public:
    void get(int a,int b,int c,int d)
    {
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
    }
};

class calculate_determinant: public Matrix
{
    public:

    void calculate()
    {
        int det=a*d-b*c;
        cout<<"determinant is : "<<det<<endl;
    }
};

int main()
{
    calculate_determinant d;
    d.get(12,3,4,6);
    d.calculate();

    return 0;

}