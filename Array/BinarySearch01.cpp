/* Binary Search Using While loop it's batter then for loop 
* but first time Binary
* I was use For loop lol 
*You need to input ascending or descinding order
*/
#include<iostream>
using namespace std;
int BinarySearch(int* arr, int size, int key)
{
    int mid, first=0, last=size;
    while (last>=first)
    {
        mid=(first+last)/2;
        if (arr[mid]==key)
        {
            cout<<"Element is found"<<endl;
            return 1;
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
    return 0;    
}
int main()
{
    int size;
    cout<<"Enter Size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter Asending or Descending order Element of array "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key to Search in Array";
    int key;
    cin>>key;
    cout<<BinarySearch(arr,size,key);
}