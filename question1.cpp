#include<iostream>
using namespace std;
bool checker(int a,int b)
{
    if(a==30||b==30)
    {
        return true;
    }
    else if((a+b)==30)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a,b;
    cout<<"Give the Numbers:";
    cin>>a>>b;
    cout<<checker(a,b)<<endl;
}