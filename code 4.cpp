#include <stdio.h>
int main ()
{
int max_score = 1000;
int user_score = 678;
float percentage = (float) user_score / max_score * 100;
printf ("percentage of user score : %.2f", percentage);
return 0;
}

