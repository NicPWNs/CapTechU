#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

char *quoteHelper(void) {

    static char quote[1000];
    
    int end, loop, line;
    char str[1000];
    FILE *fd = fopen("quotes.txt", "r");

    time_t t;
    srand((unsigned) time(&t));
    line = rand() % 44;

    for(end = loop = 0;loop<line;++loop)
    {
        if(0==fgets(str, sizeof(str), fd))
        {
            end = 1;
            break;
        }
    }
    if(!end)
        snprintf(quote, sizeof(quote), "%02d: %s", line, str);
    fclose(fd);

    return quote;
}