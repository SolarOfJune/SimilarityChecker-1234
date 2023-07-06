#include "pch.h"
#include "../SimilarityChecker/similarity_checker.cpp"

TEST(TestCaseName, ExceptionCase_lower) {
	SimilarityChecker checker;
	EXPECT_THROW(checker.checkLength("ABC", "abc"), invalid_argument);
	EXPECT_THROW(checker.checkLength("AbC", "ABC"), invalid_argument);
}