#include <stdio.h>
#include <string.h>

int main(void) {
    char str[51];         // 최대 50자리 문자열 입력을 위한 배열
    int arr[25] = { 0 };  // '-'로 나눈 각 그룹의 합을 저장할 배열
    scanf("%s", str);     // 수식 입력 받기

    int len = strlen(str);  // 문자열 길이 저장
    int i, j = 0;           // i: 순회 인덱스, j: 그룹 인덱스
    int temp = 0;           // 현재 숫자를 저장할 변수
    int sum = 0;            // '+'로 묶인 수들의 합
    int result = 0;         // 최종 결과 저장

    // 문자열 순회하면서 숫자 파싱 및 그룹화
    for (i = 0; i <= len; i++) {
        if (str[i] == '-' || i == len) {
            // '-'를 만나거나 문자열 끝이면, 지금까지의 그룹을 배열에 저장
            sum += temp;       // 마지막 숫자도 더함
            arr[j++] = sum;    // 그룹 저장 후 인덱스 증가
            temp = 0;          // 숫자 초기화
            sum = 0;           // 그룹 합 초기화
        }
        else if (str[i] == '+') {
            // '+'일 경우, 현재 숫자를 그룹 합에 추가
            sum += temp;
            temp = 0;          // 숫자 초기화
        }
        else {
            // 숫자일 경우: 문자열에서 숫자 만들기 (연속된 자리수 대응)
            temp = temp * 10 + (str[i] - '0');
        }
    }

    // 결과 계산: 첫 번째 그룹은 그대로, 이후 그룹은 모두 빼줌
    result = arr[0];
    for (i = 1; i < j; i++) {
        result -= arr[i];
    }

    // 최종 결과 출력
    printf("%d", result);

    return 0;
}
