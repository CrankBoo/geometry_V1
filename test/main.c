#include "circle.h"
#include "ctest.h"

int main(int argc, const char** argv){

	return ctest_main(argc, argv);

}

CTEST(dist_test, result_test){

	const float r1=2;
	const float r2=3;
	const float x1 = 1;
	const float x2 = 1;
	const float y1 = 2;
	const float y2 = 2;

	const int result = CheckCircle(r1,r2, x1, x2, y1, y2);


	const int expected = 1;

	ASSERT_EQUAL(expected,result);

}
