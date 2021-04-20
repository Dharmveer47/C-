#include <iostream>
using namespace std;
int main()
{
    int a[] = {10, 20, 10, 60,20,50,60,20,50,3,2,4,5,4,1};
    int d=0;
    int size=sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i]==a[j])
            {
                d++;
            }
          
            // else
            // {
            //     cout<<"Nothing Dublicate"<<endl;
            // }
            
        }
        
        
    }
      cout<<"Total Dublicate Value is "<<d<<endl;
}