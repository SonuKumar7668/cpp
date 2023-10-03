#include<iostream>
using namespace std;
int main()
{
    char v;
    cin>>v;
    int a=(v=='a' || v=='e' || v=='i' || v=='o' || v=='u');
    int b=(v=='A' || v=='E' || v=='I' || v=='O' || v=='U');

    if(a ||b){
        cout<<v<<" is a vowel.";
    }
    else{
        cout<<v<<" is a consonent.";
    }
    return 0;
}