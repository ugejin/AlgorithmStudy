#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    if(a>b)
    {
        for(int i=b ; i<=a ; i++)
        {
            answer=answer+i;
        }
    }
    else if(b>a)
    {
        for(int i=a ; i<=b ; i++)
        {
            answer=answer+i;
        }
    }
    else if(a=b)
    {
        return a;
    }
    return answer;
}