// micro test framework
static int test_number;
static int planned_tests;
#define ok(result, description) \
	test_number++; \
	if (result) printf("ok, %i\n", test_number); else printf("fail, %i: %s", test_number, #description);
#define fail(result, description) ok(!(result), description)
#define plan(num) planned_tests = num;

// test suite
void test_suite ();
void test_sanity ();
