#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10000
#define LEN 21  // 이름 최대 길이: 20자 + null  문자

char list[MAX * 2][LEN];      // 전체 이름 저장 배열 (N + M명)
char result[MAX][LEN];        // 중복된 이름 저장 배열

int compare(const void* a, const void* b) {
    return strcmp((char*)a, (char*)b);  // qsort용 정렬 함수
}

int main() {
    int N, M;
    int i, j, count = 0;

    scanf("%d %d", &N, &M);

    // N + M개의 이름 입력
    for (i = 0; i < N + M; i++) {
        scanf("%s", list[i]);
    }

    // 이름 정렬 (사전 순)
    qsort(list, N + M, LEN, compare);

    // 인접한 두 이름이 같으면 중복
    for (i = 0; i < N + M - 1; i++) {
        if (strcmp(list[i], list[i + 1]) == 0) {
            strcpy(result[count++], list[i]);
            i++; // 중복된 쌍은 한 번만 체크하고 넘어감
        }
    }

    // 결과 출력
    printf("%d\n", count);
    for (i = 0; i < count; i++) {
        printf("%s\n", result[i]);
    }

    return 0;
}
