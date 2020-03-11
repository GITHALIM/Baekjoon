#include <iostream>
int main(){
    char input[101];    //    fgets는 최대 (두번째 매개변수 - 1)만큼의 문자를 입력받기 때문
    while(fgets(input,101,stdin))
        printf("%s",input);
    return 0;
}
