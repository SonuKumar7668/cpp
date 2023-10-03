//this program will check if the person is eligible for vote using function;

#include<iostream>
using namespace std;
bool age(int age)
{
    if(age<18){
        return false;
    }
    else{
       return true;
    }
}
int main()
{
    int n;
    cout<<"inter age of the person \n";
    cin>>n;
    if(age(n)==false){
        cout<<"NO";
    }
    else{
        cout<<"yes";
    }

}