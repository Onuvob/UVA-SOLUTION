#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cas, n, p, cap, mid;
    cin>>cas;

    for(int i=1; i<=cas; i++)
    {
        cin>>n;
        mid = (n/2)+1;

        for(int k=1; k<=n; k++)
        {
            cin>>p;
            if(k == mid)
                cap = p;
        }
        cout<<"Case "<<i;
        cout<<": "<<cap<<endl;
    }

    return 0;
}
