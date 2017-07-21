#include<iostream>
using namespace std;

int main()
{
    int cas, n;
    cin>>cas;
    while(cas--)
    {
        int p = 0;
        cin>>n;
        int arr[n];

        string wholeLine, newLine;
        int num;

        for(int i=0; i<n; i++)
        {
            cin>>wholeLine;

            if(wholeLine == "LEFT")
            {
                arr[i] = -1;
                p -= 1;
            }

            else if(wholeLine == "RIGHT")
            {
                 arr[i] = 1;
                 p += 1;
            }

            else
            {
                cin>>newLine>>num;
                arr[i] = arr[num-1];
                p += arr[i];
            }
        }
        cout<<p<<endl;

    }
    return 0;
}
