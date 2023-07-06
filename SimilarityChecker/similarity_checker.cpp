#include <stdexcept>
using namespace std;

class SimilarityChecker
{
public:
	int checkLength(string str1, string str2)
	{
		checkUpperClass(str1);
		checkUpperClass(str2);

		return 0;
	}
private:
	void checkUpperClass(string str)
	{
		for (char ch : str)
		{
			if (ch <= 'A' || ch >= 'Z')
			{
				throw invalid_argument("Must be use upper class");
			}
		}
	}
};