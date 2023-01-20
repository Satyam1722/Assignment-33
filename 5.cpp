#include<iostream>
#include<math.h>
using namespace std;

class Photon{
    protected:
    double wavelength;
    
    public:

    Photon(double p)
    {
        wavelength=p;
    }
    
};

class calculate_photonEnergy : public Photon{
    public:
    void calculate()
    {
        double energy=(6.626*3)/wavelength;
        energy*=pow(10,-17);
        cout<<"energy is : "<<energy<<" joule"<<endl;


    }

    calculate_photonEnergy() : Photon(5){}
};

int main()
{
    calculate_photonEnergy c;
    c.calculate();
    return 0;
}
