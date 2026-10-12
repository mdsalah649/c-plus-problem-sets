//Write a programm in c++ to find the perfect Numbers between 1 and 500
/*The perfect Numbers between 1 and 500 are:
    6,28,496;
*/
#include<iostream>
using namespace std;
int main()
{
    int sum;   
    for(int n=1;n<=500;n++)
    {
        sum=0;
        for(int i=1;i<n;i++)/*This loop can be shortened to n/2 because a proper is
                                is never larger than n/2*/ 
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==n)
        {
            cout<<n<<endl;
        }

    }
    return 0;
}