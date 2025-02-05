#ifndef POINT2D_H
#define POINT2D_H

#include <ostream>
#include<cmath>

using namespace std;


class Point2D{
    public:
        double x;
        double y;

        Point2D(double x=0, double y=0);

        static double distance(const Point2D &a, const Point2D &b); 

        friend bool operator==(const Point2D &a, const Point2D &b);
        friend bool operator!=(const Point2D &a, const Point2D &b);
        friend ostream& operator<<(std::ostream &out, const Point2D &p);
};


#endif
