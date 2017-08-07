#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int cas;

    cin>>cas;

    double d, v, u, diff;

    for(int i=1; i<=cas; i++)
    {
        cin>>d>>v>>u;

        cout<<"Case "<<i<<": ";

        if(u == 0 || v == 0 || u <= v)
            cout<<"can't determine"<<endl;

        else
        {
            diff = (d/u) - (d/sqrt(u*u - v*v));

            printf("%.3lf\n",fabs(diff));
        }
    }

    return 0;
}
