#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(1)
    {
        cin>>n;
        if(n == 0)
            return 0;
        int i = 1, sum = 0;
        while((i*i) <= (n*n))
        {
            sum += (i*i);
            i++;
        }
        cout<<sum<<endl;
    }

    return 0;
}
