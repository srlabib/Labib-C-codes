#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void)
{
    char string[1000];
    gets(string);
    bool word_started = false;
    bool first_word = true;
    int i;
    for (i=0; i<strlen(string); i++)
    {
        if(string[i] == ' ' || !(string[i]>='a' && string[i] <= 'z') && !(string[i]>='A' && string[i] <= 'Z') && !(string[i]>='1' && string[i] <= '9'))
        {
            word_started = true;
        }


        else
        {
            if(word_started && first_word)
            {
                word_started = false;
                continue;
            }
            if(word_started)
            {
                if(!(string[i]>='1' && string[i] <= '9')){
                    string[i] = 'A' + string[i] - 'a';
                }
                printf("\n");
                word_started = false;
                first_word = false;
            }
            if(first_word)
            {
                if(!(string[i]>='1' && string[i] <= '9')){
                    string[i] = 'A' + string[i] - 'a';
                }
                first_word = false;
            }
        printf("%c",string[i]);
        }


    }
    return 0;

}

