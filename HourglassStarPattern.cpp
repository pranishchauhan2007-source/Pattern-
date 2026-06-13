#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cin>>n;

    // Upper half
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
            cout<<"*";

        for(col=1; col<=2*n-2*row; col++)
            cout<<" ";

        for(col=1; col<=row; col++)
            cout<<"*";

        cout<<endl;
    }

    // Lower half
    for(row=2; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            cout<<"*";

        for(col=1; col<=2*n-2*row; col++)
            cout<<" ";

        for(col=1; col<=row; col++)
            cout<<"*";

        cout<<endl;
    }
}