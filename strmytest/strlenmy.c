//len은 앞에서부터 하나씩 세면서 null값 나올때 멈추고 센 갯수 반환
//null나올때까지 세는거니까 while문
//매개변수 사용, 넘겨주는 값에 따라 함수의 반환값이 바뀜
//내가 만든 함수를 밖에서도 꺼내서 쓰려면 매개변수를 포인터 매개변수로?
//i에 배열을 넣어야하는구나 그래야 배열에 있는 문자를 읽어서 숫자를 세던말던하지 ㅁㄴ어ㅗㄹ머ㅏㅣㄴㅇ치ㅏㄴ못



#include <stdio.h>

int mystrlen(const char *A){    //문자열은 A
    int i = 0;          //count
    while (A[i] != '\0'){       //i 
    i++;
    }
    return i;
}

int main(void){

    char *text = "IM STUPID";
    printf("%d\n", mystrlen(text));

    return 0;

}


// A[0] = I