#include <stdio.h>
#include <string.h>

int main(void){
    char origin[] = "BlackDesert"; // "BlackDesert\0" 이므로 size는 12
    char dest1[30];
    char dest2[10];
    char dest3[] = "STRCPYBlackDesert"; // size = 19

    strcpy(dest1, origin); // 빈 배열에 전체를 복사
    // strcpy(dest2, origin); // 배열 길이가 충분하지 않을 때 전체를 복사, error
    strcpy(dest3, origin); // 배열 길이가 충분하지 않을 때 전체를 복사

    printf("case1 : %s\n", dest1);
    // printf("case2 : %s\n", dest2); // error
    printf("case3 : %s\n", dest3);

    return 0;



}