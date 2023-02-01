#include<iostream>
using namespace std;
int noOfdots(int number);
main()
{
    int number;
    cout<<"Enter triangle no of sequence: ";
    cin>>number;
    int dot;
    dot = noOfdots(number);
    cout<<dot;


}
int noOfdots(int number)
{
    int dot=0;
    for(int i=1;i<=number;i++)
    {
       dot=dot+i;
     
    }
      return dot;
}