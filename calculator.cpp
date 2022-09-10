#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mult(int a, int b)
{
    return a*b;
}

int division(int a, int b)
{
    return a/b;
}

int main()
{
    int a,b,c,i;
    cout<<"Enter the first number ";
    cin>>a;
    cout<<endl<<"Enter the second number ";
    cin>>b;
    cout<<endl;
    cout<<"Press 1 for add "<<endl;
    cout<<"Press 2 for sub "<<endl;
    cout<<"Press 3 for mult "<<endl;
    cout<<"Press 4 for div "<<endl;
    cin>>c;
    cout<<endl;
    switch (c)
    {
    case 1:
        i=add(a,b);
        cout<<"The result is "<<i;
        break;
    case 2:
        i=sub(a,b);
        cout<<"The result is "<<i;
        break;
    case 3:
        i=mult(a,b);
        cout<<"The result is "<<i;
        break;
    case 4:
        i=division(a,b);
        cout<<"The result is "<<i;
        break;
    
    default:
    cout<<"Wrong choice ";
        break;
    }

    return 0;
}