#include<iostream>
using namespace std;
int prime(int a, int b)
{
    int i;
    for ( i = a; i < b; i++)
    {
        if (a%i==0)
        {
            break;
        }
    }
    
    return 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
    prime(a,b);
    return 0;
}