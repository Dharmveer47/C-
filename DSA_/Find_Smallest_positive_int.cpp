//Program to find smallest positive integer which in not element of the array
// Amazone Samsung .... etc company asked question ...
#include<iostream>
using namespace std;

int find_arry(int *arr,int size)
{
    //Sorting array using insertion sort
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                int swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }
    int key;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>=0)
        {
            key=arr[i];
            key++;
            if (key<arr[i+1])
            {
                cout<<key<<" Smallest positive number";
                break;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    find_arry(arr,n);
    
}