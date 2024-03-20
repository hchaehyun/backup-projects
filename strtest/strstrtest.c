#include <stdio.h>
#include <string.h>

int main(void){
    char str1[] = "BlackDesert. New Sesson open.";
    char str2[] = "Sesson";

    // 문자열 찾기
    char* ptr = strstr(str1, str2);
    // NULL값 매우 중요 빼먹지말기
    if (ptr !=NULL){
        printf("str1 : %s\n", str1);
        printf("ptr before : %c\n", *ptr);
    }

    return 0;
}