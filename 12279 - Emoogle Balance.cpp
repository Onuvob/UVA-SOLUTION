#include<iostream>
using namespace std;

int main()
{
    int cas, counter = 1;
    while(cin>>cas)
    {
        if(cas == 0)
            return 0;

        int arr[cas];
        int given, give;
        given = give = 0;

        for(int i=0; i<cas; i++)
        {
            cin>>arr[i];
            if(arr[i] == 0)
                given++;
            else
                give++;
        }
        cout<<"Case "<<counter<<": "<<give-given<<endl;
        counter++;
    }

    return 0;
}
