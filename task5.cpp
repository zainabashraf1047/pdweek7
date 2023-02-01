#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter number: ";
    cin>>number;
    for(int i=number;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=number-1;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
        for(int i=0;i<=number;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=number-1;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}