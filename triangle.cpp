#include<iostream>
using namespace std;
int main()
{
    int sidea,sideb,sidec;
    cout<<"inter sides of the triangle\n";
    cin>>sidea>>sideb>>sidec;
    
    if(sidea==sideb && sideb == sidec && sidec == sidea){
        cout<<"its a equilateral triangle\n";
    }
    else if(sidea==sideb || sideb==sidec || sidec == sidea){
        cout<<"its a isosceles triangle\n";
    }
    else{
        cout<<"its a scalene triangle\n";
    }
    return 0;
}