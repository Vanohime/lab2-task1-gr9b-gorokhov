/* hello.c 
Здесь выполнено задание 1
*/
#include <stdio.h>
#include  <stdlib.h>

int is_prime(int n) {
		if (n < 2) return 0;
		for (int i = 2; i * i <= n; i++) {
				if (n % i == 0) return 0;
		}
		return 1;
}

void find_twin_primes(int a) {
		for (int i = 2; i <= a - 2; i++) {
				if (is_prime(i) && is_prime(i + 2)) {
						printf("(%d, %d)\n", i, i + 2);
				}
		}
}

int main(int argc, char** argv)
{
	if(argc != 1){
		printf("Invalid number of arguments\n");
		return 1;
	}
	int a = atoi(argv[1]);
	find_twin_primes(a);
	return 0;
}
