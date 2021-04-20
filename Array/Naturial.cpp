#include<iostream>
using namespace std;
void printl(int n)
{
    if (n>=1)
    {
        cout<<n<<"\t";
        printl(n-1);
        cout<<n<<"<== Backtracking \t"<<endl;
    }  
}
int main()
{
    cout<<endl<<"Prining natural number using recurision"<<endl;
    printl(50);
}