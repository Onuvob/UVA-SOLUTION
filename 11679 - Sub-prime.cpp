#include<iostream>
using namespace std;

int main()
{
    int numB, numDeb, i;
    int debBank, creBank, debValue;
    int reserve[21];
    while(cin>>numB, cin>>numDeb)
    {
        if(numB == 0 && numDeb == 0)
            return 0;

        for(i=0; i<numB; i++)
            cin>>reserve[i];

        for(i=0; i<numDeb; i++)
        {
            cin>>debBank>>creBank>>debValue;

            reserve[debBank-1] -= debValue;
            reserve[creBank-1] += debValue;
        }

        for(i=0; i<numB; i++)
            if(reserve[i] < 0)
                break;

        if(i == numB)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
