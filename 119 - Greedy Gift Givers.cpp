#include<iostream>
#include<string>
using namespace std;

int main()
{
    int N, flag = 0;
    while(cin>>N)
    {
        string name[N];
        int dollar[N];
        for(int i=0; i<N; i++)
        {
            cin>>name[i];
            dollar[i] = 0;
        }
        string getName;
        int spend, numberPerson, money;
        int i, j, k;

        for( k=0; k<N; k++)
        {
            cin>>getName;
            cin>>spend;
            for( i=0; i<N; i++)
                if(getName == name[i])
                {
                    dollar[i] -= spend;
                    break;
                }

            cin>>numberPerson;

            if(numberPerson == 0)
            {
                dollar[i] += spend;
                continue;
            }

            if(spend%numberPerson != 0)
                dollar[i] += spend%numberPerson;

            string gotGift[numberPerson];

            for( i=0; i<numberPerson; i++)
            {
                cin>>gotGift[i];
                for( j=0; j<N; j++)
                    if(gotGift[i] == name[j])
                    {
                        dollar[j] += (spend/numberPerson);
                        break;
                    }
            }
        }
        if(flag == 1)
            cout<<endl;
        flag = 1;

        for( i=0; i<N; i++)
            cout<<name[i]<<" "<<dollar[i]<<endl;
    }
    return 0;
}
