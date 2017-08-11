#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, p, cas;

    cin>>cas;

    for(int i=1; i<=cas; i++)
    {
        cin>>n>>k>>p;

        cout<<"Case "<<i;
        if((k+p)%n == 0)
            cout<<": "<<n<<endl;

        else
            cout<<": "<<(k+p)%n<<endl;
    }

    return 0;
}

