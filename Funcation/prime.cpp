//Print all prime number between 2 given number
#include<iostream>
using namespace std;
int prime(int a, int b)
{
    for(int i=a; i<b; i++)
    {
        if(a%i!=0)
        {
            return i;
        }
    }
}
int main(){
    cout<<prime(1,20);
}