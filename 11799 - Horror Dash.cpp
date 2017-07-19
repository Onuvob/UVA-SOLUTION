#include<iostream>
using namespace std;

int main()
{
    int cas, num, k;
    cin>>cas;

    for(int c=1; c<=cas; c++)
    {
        cin>>num;

        int max = -1;
        for(int i=0; i<num; i++)
        {
            cin>>k;
            if(k > max)
                max = k;
        }

        cout<<"Case "<<c<<": "<<max<<endl;
    }

    return 0;
}
