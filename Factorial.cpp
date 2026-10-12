//Write a c++ program to find the factorial of a Number
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the Number:"<<endl;
    int num;
    long long fact=1;
    cin>>num;
    if(num<0)
    {
        cout<<"Factorial not possible for negative Numbers"<<endl;
        return 0;
    }
    for(int i=num;i>1;i--)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
    return 0;
}