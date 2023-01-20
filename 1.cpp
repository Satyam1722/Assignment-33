#include<iostream>
using namespace std;

class shape{
    protected:
    double a;
    double b;

    public:
    void get_data(double a,double b)
    {
        this->a=a;
        this->b=b;
    }

    virtual void display_area()=0;
};

class triangle : public shape
{
    public:

    void display_area()
    {
        double area=0.5*a*b;
        cout<<"area of traingle is : "<<area<<endl;
    }
};

class rectangle : public shape
{
    public:

    void display_area()
    {
        double area=a*b;
        cout<<"area of rectangle is : "<<area<<endl;
    }
};

int main()
{
    triangle t;
    t.get_data(4,5);
    rectangle r;
    r.get_data(3,6);
    t.display_area();
    r.display_area();

    return 0;
}