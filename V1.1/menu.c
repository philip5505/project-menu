#include <stdio.h>

int change_two();
int max_three();

int main()
{
    int input_number,func_value;

    while(1 == 1)
    {
        printf("Enter a number:\n 1 for exchange of two, 2 for max of three and 3 for exit\n");
        scanf("%d",&input_number);

        if(input_number == 3)
            {
                return;
            }

        switch(input_number)
        {
            case 1:
            func_value = change_two();

            if(func_value == 3)
            {
                return 0;
            }
            break;

            case 2:
            func_value = max_three();

            if(func_value == 3)
            {
                return 0;
            }
            break;
        }
    }
    return 0;
}

int change_two()
{
    int first_number,second_number,temp,exit_number;

    scanf("%d",&first_number);
    scanf("%d",&second_number);

    temp = first_number;
    first_number = second_number;
    second_number = temp;
    printf("%d    %d",first_number,second_number);

    printf("Type 3 for EXIT.");
    scanf("%d",&exit_number);

    return exit_number;
}

int max_three()
{
    int first_number,second_number,third_number,exit_number;
    int max = 0;

    scanf("%d",&first_number);
    max = first_number;

    scanf("%d",&second_number);
    if(second_number > max)
    {
        max = second_number;
    }

    scanf("%d",&third_number);
    if(third_number > max)
    {
        max = third_number;
    }

    printf("%d", max);

    printf("TYpe 3 for exit \n");
    scanf("%d",&exit_number);

    return exit_number;
}

