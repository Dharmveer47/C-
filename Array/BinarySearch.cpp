//Binary Search Using for loop with Funcation

#include<iostream>
using namespace std;
int binarySerch(int* arr, int size, int key)
{
    int first=0,last=size,mid;
    for (int i = 0; i < size; i++)
    {
        mid=(first+last)/2;
        if (arr[mid]==key)
        {
            return true;
        }
        else if (arr[mid]>key)
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }   
    }
    return false;
}
int main()
{
    int n;
    cout<<endl<<"Enter Size of Array";
    cin>>n; int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int key=0;
    cout<<"Enter key to find this array";
    cin>>key;
    if(binarySerch(a,n,key)==true)
    {
        cout<<"Element is Found";
    }
    else
    {
        cout<<"Element is not fonund";
    }
}