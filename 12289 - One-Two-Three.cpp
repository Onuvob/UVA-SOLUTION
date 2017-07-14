#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int cas;
    string word;

    cin>>cas;

    for(int i=1; i<=cas; i++)
    {
        cin>>word;
        int counter = 0;

        if(word.length() == 5)
            cout<<3<<endl;
        else
        {
            if(word[0] == 'o')
                counter++;
            if(word[1] == 'n')
                counter++;
            if(word[2] == 'e')
                counter++;

            if(counter>=2)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }

    return 0;
}
