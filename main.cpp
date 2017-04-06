//
//  main.cpp
//  4kiszh
//
//  Created by Donát on 26/04/16.
//  Copyright (c) 2016 Donát. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

class Shape{
    double x0;
    double y0;
public:
    virtual double area()=0;
    Shape(double x, double y):x0(x), y0(y){}
    };

class Circle: public Shape{
    double radius;
public:
    Circle(double x, double y, double r):Shape(x,y), radius(r){}
    double area(){return radius*radius*3.14;}
    double circumference(){return 2*radius*3.14;}
    double getR() const{return radius;}
};

class Cylinder: public Circle{
    double height;
public:
    Cylinder(double x, double y, double r, double h):Circle(x,y,r), height(h){}
    double area(){return (2*getR()*getR()+(2*getR()*3.14*height));}
    double volume(){return (getR()*getR()*3.14*height);}
};


int main() {
    Circle c1(0,0,1);
    cout<<"a kor terulete:"<<c1.area()<<endl;
    cout<<"a kor kerulete:"<<c1.circumference()<<endl;
    Cylinder cyl1(0,0,1,2);
    cout<<"a cilinder terulete:"<<cyl1.area()<<endl;
    cout<<"a cilinder terfogata:"<<cyl1.volume()<<endl;
    return 0;
}
