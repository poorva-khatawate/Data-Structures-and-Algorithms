#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if (str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
    char test1[6]="abcd";
    printf("%d",strlen(test1));
    printf("%d",sizeof(test1));

    char str2[100]="efgh";;
    strcat(str,str2);
    printf("%s",str);
    printf("Enter the string: ");
    char str1[100];
    scanf("%s",str1);
    char *token=strtok(str1,"-");
    while(token!=NULL){
        printf("%s\n",token);
        token=strtok(NULL,"-");
    }

    char c[2]="a";
    char d[2]= "b";
    printf("%s",strcat(c,d));
}