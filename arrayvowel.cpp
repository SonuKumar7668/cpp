#include<iostream>
using namespace std;
int main()
{
    char vowel[5];
    int size;
    size=sizeof(vowel)/sizeof(vowel[0]);
    for(int i=0;i<size;i++){
        cin>>vowel[i];
    }    
    for(int i=0;i<size;i++){
        cout<<vowel[i]<<" ";
    }
    return 0;
}