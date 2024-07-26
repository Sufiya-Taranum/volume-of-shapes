#include <stdio.h>
#include <assert.h>
#include "Day2_header.h"

int main()
{
    assert(check_for_armstrong_number(135)==0);
    assert(check_for_armstrong_number(153)==1);

    assert(check_for_amicable_number(220,284)==1);
    assert(check_for_amicable_number(123,515)==0);

    int a,b,choice=-1;
    printf("\nEnter two integers");
    scanf("%d %d",&a,&b);
    printf("MENU: \n 1.Add \n 2.Subtract \n 3.Multiply");
    while(1)
    {
        printf("\nEnter your choice");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("sum= %d",add(a,b));
        }
        else if(choice==2)
        {
            printf("difference= %d",sub(a,b));
        }
        else if(choice==3)
        {
            printf("Product= %d",multiply(a,b));
            break;
        }
        else{
            printf("Invalid input\n");
        }
    }
    return 0;
}
