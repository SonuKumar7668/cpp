#include<iostream>
using namespace std;
int main()
{
    int student,boy,Aboy,percent,Agirl;
    cout<<"number of total student in the class \n";
    cin>>student;
    cout<<"number of boys in the class \n";
    cin>>boy;
    cout<<"number of boys got a rank \n";
    cin>>Aboy;
    cout<<"percent of student got A Rank \n";
    cin>>percent;
    Agirl=(percent*student/100)-Aboy;
    cout<<"number of girls got A Rank is :-  "<<Agirl;
    return 0;
}
