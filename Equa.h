#ifndef EQUA_H
#define EQUA_H

#include <cmath>
#include <ostream>

class Equa
{
    public:
        Equa();
        Equa(double, double, double);
        void solve();
        double getResult();
        void setData(double, double, double);
        friend void informationAlerts(Equa);
        friend std::ostream& operator<<(std::ostream& out, const Equa& com);

        void setX(double X);
        void setZ(double Z);
        void setY(double Y);
        double getX() const;
        double getY() const;
        double getZ() const;
        double getT() const;

    private:
        double X;
        double Y;
        double Z;
        double T;

};

#endif // EQUA_H
