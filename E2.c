#include<stdio.h>
int main()
{
    char input;
    float KmsToMiles = 0.621372;
    float InchToFoot = 0.0833333;
    float CmToInch   = 0.393701;
    float PoundToKgs = 0.453592;
    float InchTometer= 0.0254;
    float first, second ;


    while(1)
    {
        printf("Enter the input charater. q to quit\n    1. kms to miles\n   2. inch to foot\n   3. cm to Inch\n    4. pound to kg\n    5. inch  to meter\n  " );
        scanf("%c",input);
       // printf("the character is '%c'",input);
        switch (input)
        {
        case 'q':
            printf("quiting the program...");
            goto end;
            break;
        case '1':
           printf("enter quantity in terms of first unit\n");
           scanf("%f",&first);
           second = first*KmsToMiles;
           printf("%f kilometer equal to %f miles\n\n\n",first,second);
           break;
         case '2':
           printf("enter quantity in terms of first unit\n");
           scanf("%f", &first);
           second= first*InchToFoot;
           printf("%f inch equal to %f foot\n",first,second);
           break;  
        case '3':
           printf("enter quantity in terms of first unit\n");
           scanf("%f",&first);
           second= first*CmToInch;
           printf("%f cm equal to %f inch\n",first,second);
           break;
        case '4':
           printf("enter quantity in terms of first unit\n");
           scanf("%f",&first);
           second= first * PoundToKgs;
           printf("%f pound equal to %f kgs\n",first,second);
           break;   
        case '5':
           printf("enter quantity in terms of first unit\n");
           scanf("%f",&first);
           second= first*InchTometer;
           printf("%finch equal to %f meter\n",first,second);
           break;

           default:
           printf("in default now");
           break;
        }
    }
    end:

    
    return 0;
}

