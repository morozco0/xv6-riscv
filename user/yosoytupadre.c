#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void) {
	 
	printf("Yo soy tu padre - dijo el proceso %d\n", getppid());
	exit(0);

}
