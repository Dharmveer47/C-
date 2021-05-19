#include <iostream>
using namespace std;
template <class t>
inline t large(t n1, t n2)
{
    return (n1 > n2) ? n1 : n2;
}
int main()
{
    int i1,i2;
    cin>>i1>>i2;
    cout<<large(i1,i2)<<endl;
    //Using ascii
    char c1,c2;
    cin>>c1>>c2;
    cout<<large(c1,c2)<<endl;
}
