#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>

#include "testcases.h"

void *buff;

#define PAGE_SIZE		(4096)
/* Use 4GB memory */
#define TOTAL_MEMORY_SIZE	(4UL * 1024 * 1024 * 1024)

/*
 * Placeholder for signal handler and policy implementation.
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
	 * Placeholder for registering with the kernel ballooning driver.
	 */

	/* test-case */
	test_case_main(buff, TOTAL_MEMORY_SIZE);

	munmap(ptr, TOTAL_MEMORY_SIZE);

}