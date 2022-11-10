#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float total = 0;
   while(true)
   {
        float num;
       if (total != 0)
       {
            char operation;
            printf("Choose the operation + - / *: ");
            scanf("%s",&operation);
            printf("Enter a number: ");
            scanf("%f",&num);

            switch(operation)
            {
            case '+':
            total+=num;
            break;
            case '-':
            total-=num;
            break;
            case '/':
            total/=num;
            break;
            case '*':
            total*=num;
            break;
            }
            printf("%f\n",total);
       }
        if (total==0)
        {
            printf("Enter a number: ");
            scanf("%f",&num);
            total=num;
        }
   }
    return 0;
}
