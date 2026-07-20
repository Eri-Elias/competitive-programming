/*
    Author: Herick Elias
    Problem: 1040 - Avarage 3 (with C)
    Level: 5/9
    Source: https://judge.beecrowd.com/en/problems/view/1040
*/

#include <stdio.h>

int main () {

	double n1,n2,n3,n4,n5,media,mediafinal;

	scanf ("%lf %lf %lf %lf", &n1,&n2,&n3,&n4);

	media = ((n1*2 + n2*3 + n3*4 + n4*1)/(10));
	if (media >= 7) {
		printf ("Media: %.1lf\nAluno aprovado.\n",media);
	}
	else if (media < 5) {
		printf ("Media: %.1lf\nAluno reprovado.\n",media);
		return 0;
	}
	if (media >= 5 && media <= 7) {
		scanf ("%lf", &n5);
		printf ("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\n", media,n5);
		mediafinal = (media + n5)/(2);

		if (mediafinal >= 5) {
			printf ("Aluno aprovado.\n");
			printf ("Media final: %.1lf\n", mediafinal);
		}
		else {
			printf ("Aluno reprovado.\n");
			printf ("Media final: %.1lf\n", mediafinal);
		}
	}
}