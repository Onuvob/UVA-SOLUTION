#include<iostream>
using namespace std;

int main()
{
    int cas, N, M, X, Y;
    while(1)
    {
        cin>>cas;

        if (cas == 0)
            return 0;

        cin>>N>>M;

        for(int i=1; i<=cas; i++)
        {
            cin>>X>>Y;

            if(X == N || Y == M)
                cout<<"divisa"<<endl;
            else if(X > N & Y > M)
                cout<<"NE"<<endl;
            else if(X < N && Y > M)
                cout<<"NO"<<endl;
            else if(X < N && Y < M)
                cout<<"SO"<<endl;
            else
                cout<<"SE"<<endl;
        }
    }
    return 0;
}
