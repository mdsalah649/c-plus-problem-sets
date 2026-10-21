#include<iostream>
using namespace std;
class circle1
{
    public:
        double radius;
    circle1()
    {
        radius=1;
    }
    circle1(double newRadius)
    {
        radius=newRadius;
    }
    double getArea()
    {
        return radius*radius*3.14159;
    }

};
int main()
{
    circle1 c1(1.0);
    circle1 c2(25);
    circle1 c3(125);
    cout<<"The area of the circle of radius:"<<c1.radius<<"is"<<c1.getArea()<<endl;
}