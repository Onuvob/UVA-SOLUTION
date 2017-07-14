#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[3];
    int cas, max, min;
    cin>>cas;

    for(int i=1; i<=cas; i++)
    {
        for(int j=0; j<3; j++)
            cin>>arr[j];

        sort(arr, arr+3);

        cout<<"Case "<<i<<": "<<arr[1]<<endl;
    }

    return 0;
}
