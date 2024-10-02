#include<stdio.h>
int main()
{
    int y;
    printf("Enter a yer in yyyy format");
    scanf("%d",&y);

    if(y%400==0)
    {
        if(y%100==0)
        {
            printf("Leap Year");
        }
        else{
            printf("not a leap year");
        }
    }
    if(y%4==0)
    printf("%d is leap year",y);
    else
    printf("%d is not a leap year",y);
    return 0;

}

