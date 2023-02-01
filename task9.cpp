#include<iostream>
using namespace std;
main()
{
    int number,w8;
    int totalw8;
    float busw8,truckw8,trainw8;
    float busp,truckp,trainp,totalp;
    int avg;
    float avgp,prcntb,prcnttrain,prcnttruck;
    cout<<"Enter number: ";
    cin>>number;
for(int i=1;i<=number;i++)
{
    cout<<"Enter weight: ";
    cin>>w8;
    totalw8=totalw8+w8;
    if(w8<=3)
    {
        busw8=busw8+w8;
        
    }
    else if(w8<=11)
    {
        truckw8=truckw8+w8;
    }
    else
    {
        trainw8=trainw8+w8;
    }

}
busp=busw8*200;
truckp=truckw8*175;
trainp=trainw8*120;
totalp=busp+trainp+truckp;
prcntb=busw8/totalw8*100.0;
prcnttrain=trainw8/totalw8*100.0;
prcnttruck=truckw8/totalw8*100.0;
avg=totalp/totalw8*100;
avgp=avg/100.0;
cout<<"avg price is: "<<avgp<<endl;
cout<<prcntb<<"%bus"<<endl;
cout<<prcnttrain<<"%train"<<endl;
cout<<prcnttruck<<"%truck"<<endl;
}