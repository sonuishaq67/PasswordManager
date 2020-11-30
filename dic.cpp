#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *dic[][40] = {
    "atlas", "A volume of maps.",
    "car", "A motorized vehicle.",
    "telephone", "A communication device.",
    "airplane", "A flying machine.",
    "\0", "\0" 
};
int main(void)
{
    char word[80], ch;
    char **p;
    do
    {
        puts("\nEnter word: ");
        scanf("%s", word);
        p = (char **)dic;
        do
        {
            if (!strcmp(*p, word))
            {
                puts("Meaning:");
                puts(*(p + 1));
                break;
            }
            if (!strcmp(*p, word))
                break;
            p = p + 2;
        } while (*p);
        if (!*p)
            puts("Word not in dictionary.");
        printf("Another? (y/n): ");
        scanf(" %c%*c", &ch);
    } while (toupper(ch) != 'N');
    return 0;
}