#include<iostream>
using namespace std;
int main()
{

    int a[]={10,20,40,5,6,7,9,50};
    int b[8];
    for (int i = 0; i < 8; i++)
    {
        for (int j =0; j < 8; j++)
        {
            if (a[i]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout<<"\t"<<a[i];
    }
}