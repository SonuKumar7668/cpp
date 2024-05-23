#include<iostream>
using namespace std;
int main(){
    string a,b;
    cout<<"Enter the sentence you want to find"<<endl;
    cin>>a;
    cout<<"Enter the sentence to be found from"<<endl;
    cin>>b;
    int m=a.size();
    int n=b.size();
    int x=0;
    int y=0;
    for(int i=0;i<m;i++){
        for(int j=x;j<n;j++){
            if(a[i]==b[j]){
                y++;
                x=j;
            }
        }
    }
    if(y>=m){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}