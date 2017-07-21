#include<iostream>
using namespace std;

int main()
{
    int cas, n, sum, juice, mile;
    cin>>cas;
    for(int i=1; i<=cas; i++)
    {
        cin>>n;
        int seconds[n];

        juice = mile = 0;

        for(int k=0; k<n; k++)
            cin>>seconds[k];

        cout<<"Case "<<i<<": ";
        for(int k=0; k<n; k++)
        {
            if(seconds[k]%29 != 0)
                mile += ((seconds[k]/30) + 1) * 10;
            else
                mile += (seconds[k]/29) * 10;

            if(seconds[k]%59 != 0)
                juice += ((seconds[k]/60) + 1) * 15;

            else
                juice += (seconds[k]/59) * 15;
        }

        if(mile == juice)
            cout<<"Mile Juice "<<juice<<endl;
        else if(mile > juice)
            cout<<"Juice "<<juice<<endl;
        else
            cout<<"Mile "<<mile<<endl;
    }
    return 0;
}
