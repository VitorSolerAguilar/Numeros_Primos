#include<stdio.h>

int main() {
	int i=0, j=0, num=0;

	for(i = 1; i < 11; i++) {
		printf("Digite o %io. numero inteiro positivo: ", i);
		scanf("%i", &num);

		if(num < 2 || num % 2 == 0 && num != 2) {
			for(j = 1; j < num+1; j++) {
				if(num % j == 0) {
					printf("O Divisivel por %i.\n", j);
				}
			}
			printf("%i nao e um numero primo. \n\n", num);
		} else {
			printf("Divisivel por 1.\nDivisivel por %i.\n%i e um numero primo.\n\n", num, num);
		}
	}
	return 0;
}
