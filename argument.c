/**
 * 인수 전달 방법
 * 
 * 함수를 호출할 때에는 함수에 필요한 데이터를 인수(argument)를 통해 전달해 줄 수 있음
 * 1 값에 의한 전달(call by value)
 *  - 인수로 전달되는 변수가 가지고 있는 값을 함수 내의 매개변수에 복사하는 방식
 *  - 매개변수는 인수로 전달된 변수와는 완전히 별개의 변수가 됨
 *  - 함수 내에서의 매개변수 조작은 인수로 전달되는 변수에 아무런 영향 없음
 * 2 참조에 의한 전달(call by reference)
 *  - 인수로 해당변수의 주소값을 전달
 *  - 함수의 매개변수에 인수로 전달된 변수의 원래 주소값을 저장
 *  - 인수로 전달된 변수의 값을 함수 내에서 변경할 수 있음
 * 
*/

# include <stdio.h>

void callByValue(int);
void callByReference(int*);

int main(void){
    int var = 10;
    printf("변수 var의 초기값은 %d 입니다 \n", var);

    callByValue(var);
    printf("callByValue 이후 변수 var의 값은 %d 입니다 \n", var);

    callByReference(&var);
    printf("callByReference 이후 변수 var의 값은 %d 입니다 \n", var);

    return 0;
}

void callByValue(int num){
    num += 10;
}

void callByReference(int* num){
    *num += 10;
}
