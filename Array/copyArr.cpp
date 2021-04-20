#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter Size of array"<<endl;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nPrinting First Array"<<endl;
       for(i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
    cout<<"\ncopy all element another array"<<endl;
    int b[n];
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        cout<<"\t"<<b[i];
    }
}