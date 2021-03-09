#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>

#include "testcases.h"

void *buff;

#define PAGE_SIZE		(4096)

/*
 * 			placeholder-1
 * implement your signal handler and page replacement policy here
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
	/*
	 * 		placeholder-2
	 * register me with the kernel ballooning driver
	 */

	/* test-case */
	test_case_main(buff, TOTAL_MEMORY_SIZE);

	munmap(ptr, TOTAL_MEMORY_SIZE);

}
