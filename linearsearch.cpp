#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,7,8,9,4,6};
    int key;
    cout<<"inter the number you want to search \n";
    cin>>key;
    int ans=-1;
    for(int i=0;i<6;i++){
        if(arr[i]==key){
            ans=arr[i];
        }
    }
    cout<<ans;
    return 0;

}
