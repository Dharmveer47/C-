/*
*
* *
* * *
* * * *
* * * * *
* * * * * *
*/
#include<iostream>
using namespace std;
#define N 10
int main()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j<i)
            {
                cout<<" *";
            }
            else
            {
                cout<<" ";
            }       
        }
        cout<<endl;
    }
    // 1 2 3 4 5  print j
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j<(N-i))
            {
                cout<<" *";//j//i
            }
            else
            {
                cout<<" ";
            }       
        }
        cout<<endl;
    }

    //           1
    //         2 1
    //       3 2 1
    //     4 3 2 1
    //   5 4 3 2 1

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j<(N-i))
            {
                cout<<" ";
            }
            else
            {
                cout<<N-j;
            }       
        }
        cout<<endl;
    }
    //          1
    //        2 1 2
    //      3 2 1 2 3
    //    4 3 2 1 2 3 4
    //  5 4 3 2 1 2 3 4 5
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2*N; j++)
        {
            if (j<N-i)
            {
                cout<<" ";
            }
            else
            {
                if (i!=1)
                {
                    cout<<" +";
                }
                else
                {
                    cout<<N+j;
                }
                
                
            }       
        }
        cout<<endl;
    }
}