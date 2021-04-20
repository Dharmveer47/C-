#include<iostream>
using namespace std;
class unique
{
    public:
    void getdataShowdata(int *a,int size)
    {
        for (int i = 0; i < size; i++)
        {
           if (a[i]%2!=0)
            {
                cout<<"\t"<<a[i]<<endl;
            }
            //cout<<"\t"<<a[i]<<endl;
            
        }
       /* int sizeb=sizeof(b)/sizeof(b[0]);
        cout<<"Total unique value is"<<endl;
        for (int i = 0; i < sizeb; i++)
        {
            cout<<"\t"<<b[i]<<endl;
        }*/
    }
};
int main()
{
    unique u1;
    int a[]={1,2,3,4,5,6,7,8,9,0};
    int size=sizeof(a)/sizeof(a[0]);
    u1.getdataShowdata(a,size);
}