//Form a string where hash represents backspace

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int i=0;
    int j=0;
    char res[100];
    
    while(str[i]!='\0'){
        if(str[i]!='#'){
            res[j]=str[i];
            i++;
            j++;
        }
        else{
            j--;
            if(j<0){
                j=0;
            }
            i++;
        }
       
    }
    res[j]='\0';
    printf("%s",res);
    return 0;
}