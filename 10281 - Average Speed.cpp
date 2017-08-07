#include<iostream>
#include<cstdio>

int main()
{
    char line[1000];
    int hour, minute, second, current, previous = 0, input;
    int currentSpeed = 0, speed;
    double distance = 0;

    while(gets(line))
    {
        input = sscanf(line, "%d: %d: %d %d", &hour, &minute, &second, &speed);
        current = (hour*3600) + (minute*60) + second;

        distance += (current - previous) * currentSpeed;

        if(input == 3)
            printf("%02d:%02d:%02d %.2lf km\n", hour, minute, second, distance/3600.0);

        else
            currentSpeed = speed;

        previous = current;
    }
    return 0;
}

