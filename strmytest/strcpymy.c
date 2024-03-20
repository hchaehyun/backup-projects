// 오리진에 있는거 dest에 덮어쓴느거
// 나는 모자라다  오리진에 있는 널값까지 복사를 하는데 
// 오리진보다 DEST의 배열이 작으면 배열이 모자라서 넘쳐버리면 버퍼 오버플로우 발생 가능성
// 배열 사이즈를 미리 체크 근데 이걸 어떻게? 몰라
// 앞에서부터 오리진 순차적으로 읽어야함 근데 NULL문자 만나면 멈춤
// 오리진 사이즈보다 DEST가 작으면 DEST가 NULL값이 되기 전까지 덮어쓴다
// while ( origin[i] != '\0' && i < dest_len){i++;}

// dest_len 이 dest 배열 크기

// char* my_strcpy(char *dest, const char *origin, const int dest_len)
