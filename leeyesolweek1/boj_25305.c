#include<stdio.h>

int arr[1000];	//최대 1000개의 정수를 저장하는 배열

int n, k, temp;

int main() {
	scanf("%d %d", &n, &k); //n:배열 크기, k:k번째로 큰 수를 찾기 위함함
	for (int i = 0; i < n; i++) { //배열 입력받기기
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {	//선택 정렬, ~k번째까지 정렬렬
		for (int j = i + 1; j < n; j++) { //내림차순으로 정렬 (큰 값이 앞쪽으로로)
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		if (i == k - 1) break;	//k번째 원소까지 정렬 완료하면 정렬 중단단
	}
	printf("%d", arr[k - 1]);	//k번째로 큰 값 출력(배열은 0부터 시작, 따라서 k-1)
	return 0;
}