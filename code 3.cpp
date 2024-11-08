#include <stdio.h>
#include <math.h>
int main()
{
int number_of_item = 5;
float cost_per_item = 6.5;
float total_cost = number_of_item * cost_per_item;
char symbol = '$';
printf ("TOTAL ITEM = %d\n" , number_of_item);
printf ("COST PER ITEM = %.1f %c\n" , cost_per_item, symbol);
printf ("TOTAL COST = %.1f %c\n" , total_cost, symbol);
return 0;
}
