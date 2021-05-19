#include <iostream>
using namespace std;
int smArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            key = arr[i];
            break;
        }
    }
    // int s=0;
    // int e=n;
    for (int i = 0; i < n; i++)
    {
        // int mid=(s+e)/2;
        if (arr[i] == key)
        {
            key = arr[i];
            key++;
            if (key >= arr[i] && key < arr[i + 1])
            {
                cout << key << " Smallest Positive Number" << endl;
            }
        }
        // else if (arr[mid]>key)
        // {
        //     e=mid-1;
        // }
        // else
        // {
        //     s=mid+1;
        // }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    smArr(arr, n);
}