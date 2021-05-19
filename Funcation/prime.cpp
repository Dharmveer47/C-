//Prime number
#include<iostream>
using namespace std;
int prime(int n)
{
    int i;
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            break;
        }
    }
    if (i==n)
    {
        cout<<n<<" is prime number";
    }
    else
    {
        cout<<n<<" is not prime number";
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    prime(n);
}