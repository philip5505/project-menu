#include <stdio.h>
#define how_many_functions 4

int change_two();
int max_three();
int max_n();

int main()
{
    int input_number,func_value;

    while(1 == 1)
    {
        printf("Enter a number:\n 1 for exchange of two, 2 for max of three, 3 for max n and 4 for exit exit\n");
        scanf("%d",&input_number);

        if(input_number == how_many_functions)
            {
                return;
            }

        switch(input_number)
        {
            case 1:
            func_value = change_two();

            if(func_value == how_many_functions)
            {
                return 0;
            }
            break;

            case 2:
            func_value = max_three();

            if(func_value == how_many_functions)
            {
                return 0;
            }
            break;

            case 3:
            func_value == max_n();

            if (func_value == how_many_functions)
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

    printf("type");
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

    printf("type");
    scanf("%d",&exit_number);

    return exit_number;
}

int max_n()
{
    int exit_number,max,how_many,input_number;
    int counter = 1;

    printf("Enter how many digits do you want to compare");
    scanf("%d",&how_many);

    scanf("%d",&input_number);
    max = input_number;

    while(counter < how_many)
    {
        scanf("%d",&input_number);

        if(input_number > max)
        {
            max = input_number;
        }
        counter ++;
    }
    printf("Max = %d ",max);

    scanf("%d",&exit_number);

    return exit_number;
}
