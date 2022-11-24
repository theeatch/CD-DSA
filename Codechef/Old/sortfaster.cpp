#include<stdio.h>

int data[200];
int i=0;

int main(void)
{
    FILE *file;

    if(file = fopen("ElephantData.txt","r"))
    {
        while(fscanf(file,"%d",data[i])!= EOF)
        {
            i++;
        }
        fclose(file);
        data[i]='\0';
    }

    for (i = 0; data[i] != '\0'; i++)
    {
      printf("%d\n", data[i]);
    } 

    return 0;
}