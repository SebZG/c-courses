#include <stdio.h>
#include <stdlib.h>

int squareInt(int a);
int cubeInt(int a);

int main()
{
    int var1 = 10;

    int answerA;
    int answerB;

    answerA = squareInt(var1);
    printf("\nanswerA, var1 squared: %d", answerA);

    answerB = cubeInt(var1);
    printf("\nanswerB, var1 cubed: %d", answerB);

    return 0;
}

int squareInt(int a)
{
    int answer;

    answer = a * a;

    return answer;
}

int cubeInt(int a)
{
    int answer;

    answer = a * a * a;

    return answer;
}
