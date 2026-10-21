#include<iostream>
using namespace std;
void checker(int a,int b)
{
    if(a==30||b==30)
    {
        cout<<"true"<<endl;
    }
    else if((a+b)==30)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"Give the Numbers:";
    cin>>a>>b;
    checker(a,b);
}