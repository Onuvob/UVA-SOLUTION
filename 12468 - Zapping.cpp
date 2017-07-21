#include<iostream>
using namespace std;

int main()
{
    int a, b;
    while(cin>>a, cin>>b)
    {
        if(a == -1 && b == -1)
            return 0;

        int go, keep;
        if(a <= b)
        {
            go = b - a;
            keep = (100+a) - b;
        }

        else if(a > b)
        {
            go = a - b;
            keep = (100+b) - a;
        }

        if(go > keep)
            cout<<keep<<endl;
        else
            cout<<go<<endl;

    }

    return 0;
}
