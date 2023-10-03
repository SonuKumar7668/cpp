//this program will find area and cercumference of the circle using radius;
#include<iostream>
using namespace std;
double area(int r)
{
    double a=3.14*r*r;
    return a;
}
float cercumference(int r)
{
    float c=2*3.14*r;
    return c;
}
int main()
{
    int r;
    cout<<"inter radius of the circle\n";
    cin>>r;
    cout<<"area of the circle is "<<area(r)<<endl;
    cout<<"cercomference of the circle is "<<cercumference(r)<<endl;
    return 0;
}