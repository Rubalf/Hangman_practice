#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAXCHAR 1000


int main(){

    FILE *fp;
    char list[MAXCHAR];
    char *words[MAXCHAR];
    int i=0;

    fp = fopen("pokemans.csv","r");

    
    while (fgets(list, MAXCHAR, fp))
    {
       char *token = strtok(list,",");

       while (token != NULL)
       {
        words[i] = token;
        token = strtok(NULL, ",");
        i += 1; 
       }
    }
    fclose(fp);

    
    return 0;

}