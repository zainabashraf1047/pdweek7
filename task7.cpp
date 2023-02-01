#include<iostream>
using namespace std;
main()
{
    
    int number=0;
    int number1=0;
    float p2=0;
    float p3=0;
    float p4=0;
    float percnt2;
    float percnt3;
    float percnt4;

    cout<<"Enter number: ";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        cout<<"Enter number: ";
        cin>>number1;
        if(number1%2==0)
        {
            p2++;
        }
        if(number1%3==0)
        {
            p3++;
        }
        if(number1%4==0)
        {
          p4++;     
        }
    }
percnt4=(p4/number)*100;
percnt3=(p3/number)*100;
percnt2=(p2/number)*100;
cout<<percnt2<<"no /ble by 2"<<endl;
cout<<percnt3<<"no /ble by 3"<<endl;
cout<<percnt4<<"no /ble by 4"<<endl;
}