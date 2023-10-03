#include<iostream>
using namespace std;
int main()
{
    int a[]={5,6,10,4,9};
    int b[]={1,2,3,4,5};
    int asize =sizeof(a)/sizeof(a[0]);
    int bsize =sizeof(b)/sizeof(b[0]);
    int amin=a[0];
    int bmin=b[0];
    for(int i=0;i<asize;i++){
        if(a[i]<amin){
            amin=a[i];
        }
    }
    for(int i=0;i<asize;i++){
        if(b[i]<bmin){
            bmin=b[i];
        }
    }
    cout<<amin<<endl;
    cout<<bmin<<endl;
    cout<<amin+bmin;
    return 0;
    
}