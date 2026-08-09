#include<iostream>
#include<cmath>
using namespace std;

enum SolidType{
    Cube,
    Cuboid,
    Cylinder,
    Cone,
    Sphere,
    Hemisphere,
};

class Solid{
    private:
        static const double PI;
        double a;
        double lcu,bcu,hcu;
        double rcy, hcy;
        double rco, hco;
        double rsp;
        double rhm;
        double v, csa, tsa;
        SolidType s;
    public:
        Solid();
        Solid(SolidType);
        void surfaceArea();
        void volume();
        void display();
};

const double Solid::PI = 3.14;
Solid::Solid(){
    s = Cube;
    a = lcu = bcu = hcu = rcy = hcy = rco = hco = rsp = rhm = v = csa = tsa = 0.0;
}

Solid::Solid(SolidType k){
    cout<<"Enter the solid name: ";
    s = k;
    switch(s){
        case Cube:
            cout<<"Enter the value of one side of a cube: ";
            cin>>a;
            if(a<0){
                cout<<"Invalid Input";
                break;
            }
            break;

        case Cuboid:
            cout<<"Enter the value of length, breadth and height of a Cuboid: ";
            cin>>lcu>>bcu>>hcu;
            if(lcu<0||bcu<0||hcu<0){
                cout<<"Invalid input";
                break;
            }
            break;

        case Cylinder:
            cout<<"Enter the value of radius and height of a cylinder: ";
            cin>>rcy>>hcy;
            if(rcy<0||hcy<0){
                cout<<"Invalid Input";
                break;
            }
            break;

        case Cone:
            cout<<"Enter the value of radius and height of a cone: ";
            cin>>rco>>hco;
            if(rco<0||hco<0){
                cout<<"Invalid Input";
                break;
            }
            break;

        case Sphere:
            cout<<"Enter the value of radius for a sphere: ";
            cin>>rsp;
            if(rsp<0){
                cout<<"Invalid operation";
                break;
            }
            break;

        case Hemisphere:
            cout<<"Enter the value of radius for a hemisphere: ";
            cin>>rhm;
            if(rhm<0){
                cout<<"Invalid operation";
                break;
            }
            break;
    }
}
void Solid::volume(){
    switch(s){
        case Cube:
        v = a*a*a;
        break;

        case Cuboid:
        v = lcu*bcu*hcu;
        break;

        case Cylinder:
        v = PI*rcy*rcy*hcy;
        break;

        case Cone:
        v = (1.0/3.0)*PI*rco*rco*hco;
        break;

        case Sphere:
        v = (4.0/3.0)*PI*rsp*rsp*rsp;
        break;

        case Hemisphere:
        v = (2.0/3.0)*PI*rhm*rhm*rhm;
        break;
    }
}

void Solid::surfaceArea(){
    switch(s){
        case Cube:
        csa = 4*a*a;
        tsa = 6*a*a;
        break;

        case Cuboid:
        csa = 2*(lcu*hcu + bcu*hcu);
        tsa = 2*(lcu*bcu + bcu*hcu + lcu*hcu);
        break;

        case Cylinder:
        csa = 2*PI*rcy*hcy;
        tsa = 2*PI*rcy*hcy + 2*PI*rcy*rcy;
        break;

        case Cone:
        {
            double lco = sqrt(rco*rco + hco*hco);
            csa = PI*rco*lco;
            tsa = PI*rco*lco + PI*rco*rco;
        }
        break;

        case Sphere:
        csa = tsa = 4*PI*rsp*rsp;
        break;

        case Hemisphere:
        csa = 2*PI*rhm*rhm;
        tsa = 3*PI*rhm*rhm;
        break;
    }
}
void Solid::display(){
    switch(s){
        case Cube:
        cout<<"The volume of cube is:"<<v;
        cout<<"The curved surface area of cube is:"<<csa;
        cout<<"The total surface area of cube is:"<<tsa;
        break;

        case Cuboid:
        cout<<"The volume of cuboid is:"<<v;
        cout<<"The curved surface area of cuboid is:"<<csa;
        cout<<"The total surface area of cuboid is:"<<tsa;
        break;

        case Cylinder:
        cout<<"The volume of Cylinder is:"<<v;
        cout<<"The curved surface area of Cylinder is:"<<csa;
        cout<<"The total surface area of Cylinder is:"<<tsa;
        break;

        case Cone:
        cout<<"The volume of cone is:"<<v;
        cout<<"The curved surface area of cone is:"<<csa;
        cout<<"The total surface area of cone is:"<<tsa;
        break;

        case Sphere:
        cout<<"The volume of sphere is:"<<v;
        cout<<"The curved surface area of sphere is:"<<csa;
        cout<<"The total surface area of sphere is:"<<tsa;
        break;

        case Hemisphere:
        cout<<"The volume of hemisphere is:"<<v;
        cout<<"The curved surface area of hemisphere is:"<<csa;
        cout<<"The total surface area of hemisphere is:"<<tsa;
        break;
    }
}

int main(){
   Solid cyl = Solid ( Cylinder ) ;
   cyl.surfaceArea( ) ;
}

