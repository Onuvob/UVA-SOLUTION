#include<iostream>
using namespace std;

int main()
{
    int cas, steps, high, low, current, i;
    cin>>cas;
    for(int c=1; c<=cas; c++)
    {
        high = low = 0;
        cin>>steps;
        int step[steps];
        for(i=0; i<steps; i++)
            cin>>step[i];

        current = step[0];

        for(i=0; i<steps; i++)
        {
            if(current < step[i])
            {
                high++;
                current = step[i];
            }
            else if(current > step[i])
            {
                low++;
                current = step[i];
            }
        }
        cout<<"Case "<<c<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
