//this program is made to find square of first 5 natural numbers using function;


#include<iostream>
using namespace std;
int square(int n)
{
    int sq=n*n;
    return sq;
}
int main()
{
    for(int n=1;n<=5;n++){
        cout<<square(n)<<" ";
    }
    return 0;

}