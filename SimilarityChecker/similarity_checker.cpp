#include <stdexcept>
#include <iostream>
using namespace std;

class SimilarityChecker
{
public:
	int checkLength(string str1, string str2)
	{
		checkUpperClass(str1);
		checkUpperClass(str2);

		if (str1.length() == str2.length())
		{
			return MAX_SCORE_FOR_LENGTH;
		}

		return 0;
	}
private:
	const int MAX_SCORE_FOR_LENGTH = 60;
	void checkUpperClass(string str)
	{
		for (char ch : str)
		{
			if (ch < 'A' || ch > 'Z')
			{
				throw invalid_argument("Must be use upper class");
			}
		}
	}
};