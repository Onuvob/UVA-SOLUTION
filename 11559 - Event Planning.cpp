#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int numP, budget, numH, numW, i, j;

    while(scanf("%d %d %d %d",&numP, &budget, &numH, &numW) == 4)
    {
        int hotelP[numH], availableR[numH][numW];

        for(i=0; i<numH; i++)
        {
            cin>>hotelP[i];
            for(j=0; j<numW; j++)
            {
                cin>>availableR[i][j];
                if(availableR[i][j] == 0)
                    hotelP[i] = -1;
            }
        }

        int min = 5000001;
        for(i=0; i<numH; i++)
            if(hotelP[i] != -1 && hotelP[i] < min)
                min = hotelP[i];

        if(numP*min <= budget)
            cout<<numP*min<<endl;
        else
            cout<<"stay home"<<endl;

    }

    return 0;
}
