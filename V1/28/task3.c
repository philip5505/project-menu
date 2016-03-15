#include <stdio.h>

struct occurance_t{
    int occurances = 0;
    long hash_of_word = 0;
    char word[4][200] = {0};
};

long hash(char *);
int main()
{
    char word[200] = {0};
    int counter = 0,counter2 = 0;
    struct occurance_t arr[3000];
    
    scanf("%s",word);
    arr[0].hash_of_word = hash(word);
    counter++;
    while(1)
    {
        scanf("%s",word);
        while(counter2 < counter)
        {
            if()
        }
        counter++;
        counter2 = 0;
    }
    return 0;
}
long hash(char *word)
{
    long ascii_counter = 42;
    long counter = 0;
    scanf("%s",word);

    while(word[counter] != '\0')
    {
        ascii_counter = ascii_counter + (word[counter] * (counter + 1));
        counter ++;
    }
    return ascii_counter;
}
