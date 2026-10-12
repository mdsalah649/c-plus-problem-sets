//Write a program in c++ to find the last prime number that occurs before the Entered Number
//Input a number to find the last prime number occurs before the number: 50
//47 is the last prime number before 50
#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter a Number:"<<endl;
    cin>>num1;
    bool is_prime;
    for(int n=num1;n>1;n--)
    {
        is_prime=true;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                is_prime=false;
                break;
            }
        }
        if(is_prime==true)
        {
            cout<<n<<endl;
            break;
        }
    }
    return 0;
}