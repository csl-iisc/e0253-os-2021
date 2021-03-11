/* Use 4GB memory */
#define TOTAL_MEMORY_SIZE	(4UL * 1024 * 1024 * 1024)

/*
 * Test-case 1
 */
long test_case_1(int *ptr, long len)
{
	long i, sum = 0;
	int iter, tmp;

	for (iter = 0; iter < 200; iter++) {
		for (i = 0; i < len/2; i++) {
			ptr[i] = ptr[i] + 1;
		}
	}
	return sum;
}


/*
 * main entry point for testing use-cases.
 */
void test_case_main(int *ptr, unsigned long size)
{
	long len;

	len = size / sizeof(int);
	test_case_1(ptr, len);
}
