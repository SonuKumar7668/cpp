#include<iostream>
using namespace std;
struct car{
    string name;
    string model;
    int year;
};
int main(){
    car car1;
    cout<<"Enter Name of the first car"<<endl;
    cin>>car1.name;
    cout<<"Enter Model of the Car"<<endl;
    cin>>car1.model;
    cout<<"Enter year "<<endl;
    cin>>car1.year;
    cout<<car1.name<<endl<<car1.model<<endl<<car1.year<<endl;
    return 0;
}