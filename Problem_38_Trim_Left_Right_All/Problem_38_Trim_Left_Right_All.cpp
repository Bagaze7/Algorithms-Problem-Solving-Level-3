#include <string>
#include <vector>
#include <iostream>

using namespace std;

string ReadString()

{

	string S1;

	cout << "Please Enter Your String?\n";

	getline(cin, S1);

	return S1;

}

void PrintEachWordInString(string S1, vector<string>& vString)

{
	string delim = " "; // delimiter
	short counter = 0; // counter to count the number of words
	cout << "\nYour string wrords are: \n\n";

	short pos = 0;

	string sWord; // define a string variable

	// use find() function to get the position of the delimiters

	while ((pos = S1.find(delim)) != std::string::npos)

	{

		sWord = S1.substr(0, pos); // store the word

		if (sWord != "")

		{

			vString.push_back(sWord); // increment the counter

		}

		S1.erase(0, pos + delim.length());


	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}

}
void PrintEachWord(vector<string> vString)
{
	for (int i = 0; i < vString.size(); i++)
	{
		cout << vString[i] << endl;
	}

}
string TrimLeft(string str) {
	string delim = " "; // delimiter
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
		{
			str = str.substr(i, str.length() - i);
			break;
		}

	}
	return str;

}
string TrimRight(string str) {
	short pos = str.length() - 1;
	for (int i = pos; i >= 0; i--)
	{
		if (str[i] != ' ')
		{
			str = str.substr(0, i + 1);
			break;
		}

	}
	return str;

}
string Trim(string str) {
	return TrimLeft(TrimRight(str));
}


int main()

{
	string S1 = "                Mohammed Abu-Hahdoud     ";
	cout << "\nString = " << S1;
	cout << "\n\nTrim Left = " << TrimLeft(S1);
	cout << "\nTrim Right = " << TrimRight(S1);
	cout << "\nTrim = " << Trim(S1);

	system("pause>0");

}

