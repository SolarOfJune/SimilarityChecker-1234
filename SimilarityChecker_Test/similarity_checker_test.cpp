#include "pch.h"
#include "../SimilarityChecker/similarity_checker.cpp"

TEST(TestCaseName, ExceptionCase_lower) {
	SimilarityChecker checker;
	EXPECT_THROW(checker.checkLength("ABC", "abc"), invalid_argument);
	EXPECT_THROW(checker.checkLength("AbC", "ABC"), invalid_argument);
}

TEST(TestCaseName, ExceptionCase_number) {
	SimilarityChecker checker;
	EXPECT_THROW(checker.checkLength("ABC", "123"), invalid_argument);
}