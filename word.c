#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    gets(s);
    int len = strlen(s);
    int flag = 1;
    if(s[len-1] == 'y'){
        s[len-1] = 'i';
        flag = 1;
    }else if(s[len-1] == 's' || s[len-1] == 'x' || s[len-1] == 'o'){
        flag = 1;
    }else if((s[len-1] == 'h' && s[len-2] == 'c') || (s[len-1] == 'h' && s[len-2] == 's')){
        flag = 1;
    }else{
        flag = 0;
    }
    printf("%s", s);
    if(flag)
        printf("es \n");
    else
        printf("s \n");
    return 0;
}
