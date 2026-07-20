/*
    Level: 4/10
    Source: https://judge.beecrowd.com/en/problems/view/1403
*/

#include <stdio.h>
#include <string.h>
#define id 10001
int main() {
	int N, M, jog, seg, maior;
	scanf ("%d %d", &N, &M); 
	while (N > 0 && M >0) {
		int cont[id] = {0};
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				scanf("%d", &jog);
				cont[jog]++; 
			}
		} maior = 0, seg = 0;
		for (int i = 1; i < id; i++) {
			if (cont[i] > maior) {
				seg = maior;
				maior = cont[i];
			} else {
				if (cont[i] > seg && cont[i] < maior) {
					seg = cont[i];
				}
			}
		}
		for (int i = 1; i < id; i++) {
			if (cont[i] == seg) {
				printf("%d ", i);
			}
		}
		printf("\n");
		scanf ("%d %d", &N, &M);
	}
}
