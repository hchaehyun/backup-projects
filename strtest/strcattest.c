#include <stdio.h>
#include <string.h>

int main(void){

    char origin[] = "BlackDesert"; // "BlackDesert\0" , size = 11;
    char dest1[100] = "fixed"; // "fixed\0" , size = 6;
    char dest2[10] = "fixed"; 

    strcat(dest1, origin); // 여유공간이 많은 dest 배열 뒤에 붙여넣는 경우

    // strcat(dest2, origin); // 여유공간이 모자라는 dest 배열 뒤에 배열 총량보다 많이 붙여 넣는 경우, error

    printf("dest1 : %s\n", dest1);
    // printf("dest2 : %s\n", dest2); // error

    return 0;

}