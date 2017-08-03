#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int store[100000];
int no = 100000;

void sieve()
{
    int i, j, sq = sqrt(no);

    for(i=4; i<=no; i+=2)
        store[i] = 1;

    for(i=3; i<=sq; i+=2)
        if(store[i]==0)
            for(j=i*i; j<=no; j+=i)
                store[j]=1;
}

int main ()
{
    sieve();

    int i,j;
    string x,input;

    while(cin>>input && input!="0")
        for(i=no; i>=2; i--)
            if(store[i]== 0)
            {
                x=to_string(i);
                if(input.find(x) != (-1) )
                {
                    cout<<x<<endl;
                    break;
                }

            }

    return 0;
}
