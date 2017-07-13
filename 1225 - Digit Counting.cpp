#include<iostream>
using namespace std;

int main()
{
    int number[10];
    int cas, num;
    cin>>cas;
    while(cas--)
    {
        for(int i=0; i<10; i++)
            number[i] = 0;

        cin>>num;
        int temp = num;

        for(int i=1; i<=num; i++)
        {
            temp = i;
            while(temp != 0)
            {
                number[temp%10]++;
                temp /= 10;
            }
        }

        for(int i=0; i<10; i++)
        {
            if(i<9)
                cout<<number[i]<<" ";
            else
                cout<<number[i];
        }
        cout<<endl;
    }
    return 0;
}
