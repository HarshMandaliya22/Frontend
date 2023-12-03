// 6)Write a C program to calculate final electricity bill based upon below given criteria. take monthly electricity unit from user as input. 

// units           price  per unit 
// <100            1
// >100 & <200     2 
// >200 & <300     3
// >300 & <400     4
// >400            5

// also calculate 5% percentage energy charge on total bill amount & display total amount 

#include<stdio.h>
void main ()
{
    float unit = 0 , bill = 0 , total_bill = 0 ;

    printf("Enter the units used in month = ");
    scanf("%f" ,&unit);

    if (unit < 100)
    {
        bill = (unit * 1) ;

        total_bill = bill + ((bill * 5) / 100) ;

        printf("Your total bill is %f " , total_bill);
    }
    if (unit >= 100 && unit < 200)
    {
        bill = (unit * 2) ;

        total_bill = bill + ((bill * 5) / 100) ;

        printf("Your total bill is %f " , total_bill);
    }
    if (unit >= 200 && unit < 300)
    {
        bill = (unit * 3) ;

        total_bill =  bill + ((bill * 5) / 100) ;

        printf("Your total bill is %f " , total_bill);
    }
    if (unit >= 300 && unit < 400)
    {
        bill = (unit * 4) ;

        total_bill = bill + ((bill * 5) / 100) ;

        printf("Your total bill is %f " , total_bill);
    }
    if (unit >= 400)
    {
        bill = (unit * 5) ;

        total_bill =  bill + ((bill * 5) / 100) ;

        printf("Your total bill is %f " , total_bill);
    }
}