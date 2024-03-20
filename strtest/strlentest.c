#include <stdio.h> // printf 쓰려고
#include <string.h> // strlen 쓰려고

int main(void){

    // 문자열 길이 const char*
    char* name = "BlackDesert";                     // 체크할 문자열
    printf("char* name = \"BlackDesert\"");         // " 표시하려면 앞에 \ 써줘야함 (escape문자)
    printf("\t\t\tlen : %d\n", (int)strlen(name));            // \t는 탭, 문자열 길이 확인할 수 있게 printf 사용해서 화면 출력
    printf("%s\n", name);                           // 체크할 문자열 출력

    // char arr (배열 길이와 문자열 길이는 다름)
    char arr1[12] = "BlackDesert";                  // 배열 길이보다 문자열 길이가 길면 오류남 array보다 char가 더 길다고
    printf("char arr[12] = \"BlackDesert\"");
    printf("\t\t\tlen : %d\n", (int)strlen(arr1));  // 문자열 길이 구하는 간단한 방법, size_t 생략
    printf("%s\n", arr1);

    // 문자열 중간에 \0
    /*char arr2[13] = "Black\0Desert";
    printf("char arr[13] = \"Black\\0Desert\"");
    printf("\t\t\tlen : %d\n", (int)strlen(arr2));
    printf("%s\n", arr2);
    

    // 문자열에 null문자가 없을때
    char data[5] = {'a', 'b', 'c', 'd', 'e'};       // data타입은 null문자 없음
    printf("char data[5] = {'a', 'b', 'c', 'd', 'e'}");
    printf("\tlen : %d\n", (int)strlen(data));      // 결과는 오류가 날 것임
    printf("%s\n", data);                           // 문자열 역시 잘못된 문자 찍어냄

    */

    return 0;


}