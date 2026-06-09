#include <iostream>
using namespace std;

int main()
{
    int col,row;
    
   for(row=1;row<=5;row++)
     {
       for(col=row;col>=1;col--)
        cout<<col<<" ";
        
       cout<<endl;
     }
 }    