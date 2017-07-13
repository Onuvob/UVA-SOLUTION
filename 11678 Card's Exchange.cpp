#include<iostream>
using namespace std;

int firstCards[100010];
int secondCards[100010];

int main()
{
    int a, b, number;
    while(cin>>a>>b)
    {
        if(a == 0 && b == 0)
            break;
        for(int i=0; i<100010; i++)
            firstCards[i] = secondCards[i] = 0;
        for(int i=1; i<=a; i++)
        {
            cin>>number;
            firstCards[number] += 1;
        }
        for(int i=1; i<=b; i++)
        {
            cin>>number;
            secondCards[number] += 1;
        }
        int counterA = 0, counterB = 0;
        int freeCardA = 0, freeCardB = 0;
        for(int i=1; i<100010; i++)
        {
            if(firstCards[i] != 0)
            {
                counterA += 1;
                if(!secondCards[i])
                    freeCardA++;
            }
            if(secondCards[i] != 0)
            {
                counterB += 1;
                if(!firstCards[i])
                    freeCardB++;
            }
        }
        if(counterA < counterB)
            cout<<freeCardA<<endl;
        else
            cout<<freeCardB<<endl;
    }
    return 0;
}
