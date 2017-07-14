#include<iostream>
using namespace std;

int main()
{
    int cas, amount = 0, money;
    string get;

    cin>>cas;
    for(int i=1; i<=cas; i++)
    {
        cin>>get;
        if(get == "report")
            cout<<amount<<endl;
        else
        {
            cin>>money;
            amount += money;
        }
    }
    return 0;
}
