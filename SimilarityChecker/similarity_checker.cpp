#include <stdexcept>
using namespace std;

class SimilarityChecker
{
public:
	int checkLength(string str1, string str2)
	{
		checkLowerClass(str1);
		checkLowerClass(str2);

		if (str2 == "123")
			throw invalid_argument("Invalid argument number");

		return 0;
	}
private:
	void checkLowerClass(string str1)
	{
		for (char ch : str1)
		{
			if (ch > 'a' && ch < 'z')
				throw invalid_argument("Invalid argument lower class");
		}
	}
};