#include <iostream>
using namespace std;
#define n 5
class add
{
private:
    int arry[n], i;

public:
    void getdata()
    {
        cout << "Enter Array Element";
        for (i = 0; i < n; i++)
        {
            cout << "array" << i << "\t";
            cin >> arry[i];
        }
    }
    void showdata()
    {
        for (i = 0; i < n; i++)
        {
            cout << "\t" << arry[i];
        }
    }
    void addArray()
    {
        int i;
        int sum;
        for (i = 0; i < n; i++)
        {
            sum +=arry[i];
        }
        cout<<"Addition of array ="<<sum;
    }
};

int main()
{

    add a1;
    int a=1;
    while (1)
    {
        cout << "\n0.Termite Program \n1. Enter Value in element \n2.Show Element of array\n3.Reverse Array\n4.Add array" << endl;
        cin>>a;
        switch (a)
        {
        case 1:
            a1.getdata();
            break;
        case 2:
        {
            a1.showdata();
            break;
        }
        case 3:
        {
            a1.addArray();
            break;
        }
        default:
            break;
        }
        if (a==0)
        {
            break;
        }
        
    }   
}