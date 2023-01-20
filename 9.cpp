#include<iostream>
using namespace std;

class volume{
    protected:

  double a;
  double ans;

  public:

  void getData(double a)
  {
    this->a=a;
  }

  virtual void display()=0;

};

class cube : public volume
{
    public:
    
  void display()
  {
    ans=a*a*a;
    cout<<"volume of cube is : "<<ans<<endl;
  }
};

class sphere : public volume
{
    public:

    void display()
    {
        ans=(4/3.0)*3.14*a*a*a;
        cout<<a;
        cout<<"volume of sphere is : "<<ans<<endl;
    }
};

int main()
{
    int choice;
    sphere s;
    cube c;
    
    while(true)
    {
        cout<<"1. volume of sphere "<<endl;
        cout<<"2. volume of cube "<<endl;
        cout<<"exit with any other keys"<<endl;

        cin>>choice;

        switch(choice)
        {
            case 1 :
            {
            sphere s;
            s.getData(3);
            s.display();
            }
            break;
            
            case 2:
            {
            c.getData(3);
            s.display();
            }
            break;

            default :
            return 0;

        }
    }

    return 0;
}