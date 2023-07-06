#include "pch.h"
#include "../SimilarityChecker/similarity_checker.cpp"

class SimilarityFixture: public testing::Test
{
public:
	SimilarityChecker checker;
	void assertInvalidArgu(string str1, string str2)
	{
		try
		{
			checker.checkLength(str1, str2);
			FAIL();
		}
		catch (exception e)
		{
			//PASS
		}
	}
};

TEST_F(SimilarityFixture, ExceptionCase_lower) {
	assertInvalidArgu("ABC", "abc");
	assertInvalidArgu("AbC", "ABC");
}

TEST_F(SimilarityFixture, ExceptionCase_number) {
	assertInvalidArgu("ABC", "123");
	assertInvalidArgu("A1C", "ABC");
}

TEST_F(SimilarityFixture, Score60) {
	EXPECT_EQ(60, checker.checkLength("ABC", "DEF"));
}

TEST_F(SimilarityFixture, Score0) {
	EXPECT_EQ(0, checker.checkLength("ABC", "D"));
}