#include <stdio.h>
int main()
{
float x;
printf("Input x: ");
scanf("%f",&x);
printf("Test 1: %d\n", x >= 0);
printf("Test 2: %d\n", (x >= 5) && (x < 15));
printf("Test 3: %d\n", (x > -1) && (x < 1));
printf("Test 4: %d\n", (x > -1) && (x < 15) && ((x < 1) || (x >=5))); 
printf("Test 5: %d\n", ((x > -1) && (x < 1)) || ((x >= 5) && (x <15)) || (x == 20) || (x == 100) || (x == 1000) );
return 0;
}
