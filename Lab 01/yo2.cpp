#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter any 3 numbers";
    cin>>a>>b>>c;
    if(a>b && c<a)
    {
        cout<<"The largest number" << a;
    }
    else if(a<b && b>c)
    {
        cout<<"The largest number" << b;
    }
    else
        cout<<"The largest number" << c;

     return 0;

}
