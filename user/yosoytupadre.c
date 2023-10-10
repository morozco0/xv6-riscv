#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void) {
	 
	printf("CON GETPID(): El proceso actual tiene PID %d.\n", getpid());	
	
	printf("CON GETPPID(): Yo soy tu padre - dijo el proceso %d\n", getppid());

	printf("CON GETANCESTOR(int n)\n");

	printf("n = 0. PID: %d\n", getancestor(0));

	printf("n = 1. PID: %d\n", getancestor(1));

	printf("n = 2. PID: %d\n", getancestor(2));

	printf("n = 3. PID: %d\n", getancestor(3));

	exit(0);

}
