#include<iostream>
using namespace std;

int main()
{
    int len;

    while(cin>>len)
    {
        if(len == 0)
            return 0;

        cin.ignore();
        string line;
        getline(cin, line);

        char ch;
        int flag = 1, counter = -1, min = 20000001;

        for(int i=0; i<line.length(); i++)
        {
            if(line[i] == 'Z')
            {
                min = 0;
                break;
            }

            if(flag == 1 && line[i] != '.')
            {
                ch = line[i];
                counter = flag = 0;
            }

            else if(line[i] == 'D' && ch == 'R' || line[i] == 'R' && ch == 'D')
            {
                counter++;
                if(min > counter && counter != -1)
                    min = counter;

                counter = 0;
                ch = line[i];
            }

            else if(line[i] == '.')
                counter++;

            else if(line[i] == 'D' && ch == 'D' || line[i] == 'R' && ch == 'R')
                counter = 0;

        }

        cout<<min<<endl;
    }

    return 0;
}
