#include<iostream>
using namespace std;
void challenge(int number1);

main()
{
    int number;
    cout<<"Enter number: ";
    cin>>number;
    challenge(number1);
}

void challenge(int number1)
{
    for(int i=1;i<=number1;i++)
    {
        if(i%4==0)
        {
            cout<<i*10<<"...";
     
        }
        else
        {
            cout<<i<<"...";
        } 
    }
}