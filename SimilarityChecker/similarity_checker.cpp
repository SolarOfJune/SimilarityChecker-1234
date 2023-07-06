#include <stdexcept>
#include <iostream>
using namespace std;

class SimilarityChecker
{
public:
	pair<int, int> getLongShortString(const string& str1, const string& str2)
	{
		if (str1.length() > str2.length())
			return make_pair(str1.length(), str2.length());
		return make_pair(str2.length(), str1.length());
	}

	int checkLength(string str1, string str2)
	{
		checkUpperClass(str1);
		checkUpperClass(str2);

		pair<int, int> pair = getLongShortString(str1, str2);
		int long_len = pair.first;
		int short_len = pair.second;

		if (str1.length() == str2.length())
		{
			return MAX_SCORE_FOR_LENGTH;
		}

		if (long_len >= short_len * 2)
		{
			return MIN_SCORE_FOR_LENGTH;
		}

		int gap = long_len - short_len;
		cout << gap << ' ' << short_len << endl;
		return (short_len - gap) * MAX_SCORE_FOR_LENGTH / short_len;
	}
private:
	const int MAX_SCORE_FOR_LENGTH = 60;
	const int MIN_SCORE_FOR_LENGTH = 0;
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