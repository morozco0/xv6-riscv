#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {

	int value = atoi(argv[1]);
	 
	printf("CON GETPID(): El proceso actual tiene PID %d.\n", getpid());	
	
	printf("CON GETPPID(): Yo soy tu padre - dijo el proceso %d\n", getppid());

	printf("CON GETANCESTOR(int n):\n");

	printf("n = %d. PID: %d\n", value, getancestor(value));

	exit(0);

}
