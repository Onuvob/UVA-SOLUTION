#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cas;
    double x, y, z, A;

    cin>>cas;

    while(cas--)
    {
        cin>>x>>y>>z;

        A = (z/(x+y)) * abs(x-y);

        if(x < y)
            A -= ((z/(x+y))*x);
        else
            A += ((z/(x+y))*x);

        printf("%.0lf\n", abs(A));
    }

    return 0;
}
