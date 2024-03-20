#include <stdio.h>
#include <string.h>

int main(void){

    char str[] = "BlackDesert";
    char* ptr = strchr(str, 'D'); // str 문자열에서 알파벳 D를 찾는다
    if(ptr != NULL){ 
        printf("%c, %s\n", *ptr, ptr);
    }

    return 0;
}