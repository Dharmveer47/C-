#include<iostream>
using namespace std;
class dublicate{
    private:
    int sizeArr;
    int *a;
    public:
    void getdata(int *x){
        *a=*x;
        int size=sizeof(*a)/sizeof(int[0]);
        for (int i = 0; i < size; i++)
        {
            cin>>a[i];
        }
    }
    void printdata(int *x){
        *a=*x;
        int size=sizeof(*a)/sizeof(int[0]);
        for (int i = 0; i < size; i++)
        {
            cout<<a[i];
        }
    }
};
int main(){
    dublicate d1;
    int a[]={10,20,30,40};
    d1.getdata(a);
}