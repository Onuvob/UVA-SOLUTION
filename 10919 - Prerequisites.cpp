#include<iostream>
using namespace std;

int main()
{
    int k, m;

    while(cin>>k)
    {
        if(k == 0)
            return 0;

        cin>>m;

        int selected[k];

        for(int i=0; i<k; i++)
            cin>>selected[i];

        int courses, must, counter, mark = 0, get = m;

        while(m--)
        {
            counter = 0;

            cin>>courses>>must;

            int availCourses[courses];

            for(int i=0; i<courses; i++)
            {
                cin>>availCourses[i];

                for(int j=0; j<k; j++)
                    if(availCourses[i] == selected[j])
                        if(counter < must)
                            counter++;
            }

            if(counter == must)
                mark++;
        }

        if(get == mark)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
