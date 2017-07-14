#include<iostream>
using namespace std;

int main()
{
    int cas, l, w, h;

    cin>>cas;

    for(int i=1; i<=cas; i++)
    {
        cin>>l>>w>>h;
        if(l>20 || w>20 || h>20)
            cout<<"Case "<<i<<": bad"<<endl;
        else
            cout<<"Case "<<i<<": good"<<endl;
    }

    return 0;
}
