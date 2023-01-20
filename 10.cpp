#include<iostream>
using namespace std;

class shape{
    protected:

  double a;
  double b;

  public:

  void getData(double a,double b=0)
  {
    this->a=a;
    this->b=b;
  }

  virtual void display()=0;

};

class square : public shape
{
    public:
    
  void display()
  {
    double ans=a*a;
    cout<<"Area of Square is : "<<ans<<endl;
  }
};

class parllelogram : public shape
{
    public:

    void display()
    {
        double ans=a*b;
        cout<<"Area of Parllelogram is : "<<ans<<endl;
    }
};

int main()
{
    int choice;
    square s;
    parllelogram p;
    
    while(true)
    {
        cout<<"1. Area of sphere "<<endl;
        cout<<"2. Area of Parllelogram "<<endl;
        cout<<"exit with any other keys"<<endl;

        cin>>choice;

        switch(choice)
        {
            case 1 :
            {
            s.getData(3);
            s.display();
            }
            break;
            
            case 2:
            {
            p.getData(3,6);
            p.display();
            }
            break;

            default :
            return 0;

        }
    }

    return 0;
}