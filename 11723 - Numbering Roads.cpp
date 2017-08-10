#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r, n, i = 1;
    while(cin>>r>>n)
    {
        if(r == 0 && n == 0)
            return 0;

        cout<<"Case "<<i; i++;

        if((n * 26)+n < r)
            cout<<": impossible"<<endl;

        else
        {
            if(r%n == 0)
                cout<<": "<<(r/n) - 1<<endl;
            else
                cout<<": "<<r/n<<endl;
        }
    }
    return 0;
}
