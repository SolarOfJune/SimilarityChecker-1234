#include "pch.h"
#include "../SimilarityChecker/similarity_checker.cpp"

TEST(TestCaseName, ExceptionCase) {
	SimilarityChecker checker;
	EXPECT_THROW(checker.checkLength("ABC", "abc"), invalid_argument);
}