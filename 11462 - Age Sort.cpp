#include<bits/stdc++.h>
using namespace std;


int cmpfunc(const void *a, const void *b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int n;

    while(cin>>n)
    {
        if(n == 0)
            return 0;

        int arr[n];

        for(int i=0; i<n; i++)
            cin>>arr[i];

        qsort(arr, n, sizeof(int), cmpfunc);

        for(int i=0; i<n; i++)
        {
            if(i == n-1)
                cout<<arr[i]<<endl;
            else
                cout<<arr[i]<<" ";
        }

    }

    return(0);
}
