#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

#include "testcases.h"

void *buff;
unsigned long nr_signals = 0;

#define PAGE_SIZE		(4096)

/*
 * 			placeholder-3
 * implement your page replacement policy here
 */


/*
 * 			placeholder-2
 * implement your signal handler here
 */

int main(int argc, char *argv[])
{
	int *ptr, nr_pages;

    	ptr = mmap(NULL, TOTAL_MEMORY_SIZE, PROT_READ | PROT_WRITE,
			MAP_PRIVATE | MAP_ANONYMOUS, 0, 0);

	if (ptr == MAP_FAILED) {
		printf("mmap failed\n");
       		exit(1);
	}
	buff = ptr;
	memset(buff, 0, TOTAL_MEMORY_SIZE);

	/*
	 * 		placeholder-1
	 * register me with the kernel ballooning subsystem
	 */

	/* test-case */
	test_case_main(buff, TOTAL_MEMORY_SIZE);

	munmap(ptr, TOTAL_MEMORY_SIZE);
	printf("I received SIGBALLOON %lu times\n", nr_signals);
}
