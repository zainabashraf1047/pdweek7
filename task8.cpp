#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter number: ";
    cin>>number;
    for(int i=0;i<number;i++)
    {
        for(int j=number-1;j>0;j--)
        {
            cout<<"*";
        }
        for(int j=1;j<=2*i;j++)
        {
            cout<<" ";
        }
        for(int j=number-1;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=number;i++)
    {
        for(int j=1;j<=1;j++)
        {
         cout<<"*";

        }
        for(int j=1;j<=2*(number-1);j++)
        {
         cout<<" ";
         
        }
        for(int j=1;j<=i;j++)
        {
         cout<<"*";
         
        }
        cout<<endl;
    }
}