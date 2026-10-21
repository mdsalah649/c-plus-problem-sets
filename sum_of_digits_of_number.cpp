/*
Write a c++ program to find the sum of the digits of a given Number
    Output:
        Input a number:1234
        The sum of Digits of 1234 is:10
*/
#include<iostream>
#include<cstdlib>//it is kind of the same like stdlib of c
using namespace std;
int main()
{
    int num;
    cout<<"Input a number:"<<endl;
    cin>>num;
    int temp=num;
    num=abs(num);
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    cout<<"The sum of the digits of "<<temp<<" is:"<<sum<<endl;
    return 0;
}