#include<iostream>
using namespace std;

int main()
{
    int n, m, c, counter = 1;

    while(cin>>n>>m>>c)
    {
        if(n == 0)
            return 0;

        int devices[n], toggle[n], sum = 0, operation, max = 0;

        for(int i=0; i<n; i++)
        {
            cin>>devices[i];
            toggle[i] = 0;
        }

        for(int i=0; i<m; i++)
        {
            cin>>operation;

            if(toggle[operation-1] == 0)
            {
                toggle[operation-1] = 1;
                sum += devices[operation-1];
                if(sum > max)
                    max = sum;
            }
            else
            {
                toggle[operation-1] = 0;
                sum -= devices[operation-1];
            }
        }
        cout<<"Sequence "<<counter++<<endl;

        if(max > c)
            cout<<"Fuse was blown."<<endl<<endl;
        else
        {
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<max<<" amperes."<<endl<<endl;
        }
    }
    return 0;
}
