/*
 *  A reimplementation of cat
 *  mainly for educational purposes
 */

//TODO: errormessages and stuff

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int i = 1;

    while(i < argc)
    {
        FILE *fp;
        int c;
        fp = fopen(argv[i],"r");
        if (fp == NULL) {
            printf("File %s does not exist or has insufficient permissions,please check!\n",argv[i]);
            exit(1);
        }
        c = getc(fp) ;
        while (c!= EOF)
        {
            putchar(c);
            c = getc(fp);
        }
        fclose(fp);
        i++;
    }
    return 0;
}
