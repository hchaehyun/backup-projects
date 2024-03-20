#include <stdio.h>
#include <string.h>

int main(void){
    char* str1 = "BlackDesert";
    char* str2 = "Black";
    char* str3 = "BlackAesert";
    char* str4 = "BlackBesert";
    char* str5 = "BlackCesert";

    // 문자열 비교 반환값, 양수 0 음수
    printf("1. strcmp(%s, %s)\n\t = %d\n", str1, str2, strcmp(str1, str2));
    printf("2. strcmp(%s, %s)\n\t = %d\n", str1, str3, strcmp(str1, str3));
    printf("3. strcmp(%s, %s)\n\t = %d\n", str1, str4, strcmp(str1, str4));
    printf("4. strcmp(%s, %s)\n\t = %d\n", str1, str5, strcmp(str1, str5));

    // 문자열이 동일한지 확인
    if (strcmp(str1, str2) == 0){
        printf("%s 과 %s 는 동일하다.\n", str1, str2);
    }
    else{
        printf("%s 과 %s 는 다르다.\n", str1, str2);
    }

    // 리눅스 환경에서 비교할 때
    if (strcmp(str1, str2) > 0) // 양수
    {
        printf("%s가 %s보다 크다.", str1, str2);
    }
    else if (strcmp(str1, str2) < 0) // 음수
    {
        printf("%s가 %s보다 크다.", str2, str1);
    }

    return 0;
}