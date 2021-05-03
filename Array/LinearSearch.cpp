#include<iostream>
using namespace std;
int lineraSearch(int *arr ,int key, int size)
{
    for (int i = 0; i < key; i++)
    {
        if (key==arr[i])
        {
            return arr[i];
        }
    }
}
int main()
{
    int n;
    cout<<"Enter Size of array";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<lineraSearch(a,20,n);
}