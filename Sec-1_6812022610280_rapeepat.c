#include <stdio.h>

int main() {
    int level;
    float numberl1;
    float numberl3;
    int incomelevel;

    printf("Enter numberl of ot day (1-10): ");
    scanf("%d", &level);

    printf("Enter OT hours for day1: ");
    scanf("%d", &numberl1);

    printf("Enter OT hours for day3 : ");
    scanf("%d", &numberl3);

    printf("Enter purchase amount (L,M,H) : ");
    scanf("%d", &incomelevel);



    printf("\nEnter Numberl of OT day = %d\n",level);
    printf("Enter OT hours for day1= %d\n", numberl1);
    printf("Enter OT hours for day3 = %d\n", numberl3);
    
    return 0;
}
