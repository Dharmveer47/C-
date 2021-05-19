#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not prime number ";
            break;
        }
        else
        {
            if (n % i!= 0)
            {
                continue;
            }
            else
            {
                cout<<n<<" is prime number";
                break;
            }
            
        }
    }
}