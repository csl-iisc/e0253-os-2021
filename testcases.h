/*
 * Test-case 1
 */
void test_case_1(int *ptr, long len)
{
	long i;
	int tmp;

	for (i = 0; i < len/2; i++) {
		tmp = ptr[i];
		tmp = tmp + 1;
	}
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
