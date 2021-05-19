#include<iostream>
using namespace std;
template<class swap>
swap s(swap &s1, swap &s2)
{
    swap temp=s1;
    s1=s2;
    s2=temp;
    return(s1,s2);
}
int main()
{
    int a1,a2;
    cin>>a1>>a2;
    s(a1,a2);
    cout<<a1<<" "<<a2<<endl;
    //string only one 
    char a[]="D";
    char b[]="S";
    s(*a,*b);
    cout<<a<<" "<<b<<endl;
}