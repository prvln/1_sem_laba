#include <iostream>
#include <string>

using namespace std;

int main()
{
	string buf;

	getline(cin, buf);


	bool probeli = false;
	string result;
	for (int i = 0; i < buf.length(); i++)
	{
		if (buf[i] == ' ' && probeli == true)
		{
			continue;
		}
		if (buf[i] == ' ' && probeli == false)
		{
			result.push_back(buf[i]);
			probeli = true;
		}
		else
		{
			result.push_back(buf[i]);
			probeli = false;
		}
	}
	cout << result;

	return 0;

}