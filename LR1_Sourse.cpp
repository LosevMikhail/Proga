#include <stdlib.h>       
#include <string.h>     
#include <stdio.h>

int main ()
{
    char *words[1000];
    char w[1000][100];
    char txt[1000];
    char key[30];
    char **result;
    int n = 0;
    gets(txt);
    gets(key);

    words[n] = strtok(txt, " ,.");
    while (words[n] != NULL)
    {
        strcpy(w[n], words[n]);
        n++;
        words[n] = strtok(NULL, " .,");
    }
 
    qsort(w, n, 100, (int(*)(const void*, const void*)) strcmp);
    result = (char **)bsearch (key, w, n, 100, (int(*)(const void*, const void*)) strcmp);

    if (result != NULL)
        printf ("exists");
    else
        printf ("doesn't exist");

    return 0;
}
