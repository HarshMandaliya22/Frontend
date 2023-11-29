// Write a programe to findout bmi category of user 
#include<stdio.h>
void main()
{
    int height_foot = 0 , height_inch = 0 , weight = 0 ; 
    float total_meter = 0 , bmi = 0 ;

    printf("Enter your Weight in Kg: ");
    scanf("%d", &weight);

    printf("Enter your Height in foot : ");
    scanf("%d", &height_foot);

    printf("Enter your Height in inch : ");
    scanf("%d", &height_inch);

    total_meter = (height_foot/3.281) + (height_inch/39.37);


    bmi = (weight / (total_meter * total_meter));

    printf("Your BMI is : %0.2f" ,bmi);

    if (bmi < 16 )
    {
        printf("\nSevere Thinness ");
    }
    else if (bmi >= 16 && bmi < 17)
    {
        printf("\nModerate Thinness ");
    }
    else if (bmi >= 17 &&  bmi < 18.5)
    {
        printf("\nMild Thinness ");
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        printf("\nNormal ");
    }
    else if (bmi >= 25 && bmi < 30)
    {
        printf("\nOverweight ");
    }
    else if (bmi >= 30 && bmi < 35)
    {
        printf("\nObese class 1");
    }
    else if (bmi >= 35 && bmi < 40)
    {
        printf("\nObese class 2");
    }
    else if (bmi >= 40)
    {
        printf("\nObese class 3");
    }
}