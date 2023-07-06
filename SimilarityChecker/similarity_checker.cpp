#include <stdexcept>
using namespace std;

class SimilarityChecker
{
public:
	int checkLength(string str1, string str2)
	{
		if (str2 == "abc")
			throw invalid_argument("Invalid argument lower class");

		return 0;
	}
};