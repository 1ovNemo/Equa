#include "Equa.h"
#include <iostream>
#include <math.h>

Equa::Equa()
{

}

Equa::Equa(double x, double y, double z) :
            X(x), Y(y), Z(z)
             {

             }

void Equa::solve()
{
    double x = X;
    double y = Y;
    double z = Z;

    T = ((2*cos(x-(M_PI/6)))/(0.5+pow(sin(y),2)))*(1+((pow(z,2)))/(3-((pow(z,2))/5)));

}

void Equa::setData(double x, double y, double z)
{
    X = x;
    Y = y;
    Z = z;
}

void Equa::setX(double X)
{
    Equa::X = X;
}

double Equa::getX() const
{
    return X;
}


void Equa::setY(double Y)
{
    Equa::Y = Y;
}

double Equa::getY() const
{
    return Y;
}

void Equa::setZ(double Z)
{
    Equa::Z = Z;
}

double Equa::getZ() const
{
    return Z;
}

double Equa::getT() const
{
    return T;
}

void informationAlerts(Equa val)
{
    std::cout << val << std::endl;
}

std::ostream&  operator<<(std::ostream& out, const Equa& obj)
{
    std::cout << "X=\t" << obj.getX() << "\nY =\t" << obj.getY() << "\nZ =\t" << obj.getZ() << "\nT =\t" << obj.getT() << std::endl;
    return out;
}
