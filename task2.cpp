#include<iostream>
using namespace std;
void asterik(int row );
main()
{
    int row;
  cout<<"Enter number of rows : ";
  cin>>row;
  asterik(row);

}
void asterik(int row)
{
    for(int i=row ; i>0 ; i--)
    {
        for (int j=1 ; j<=i ;j++)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}