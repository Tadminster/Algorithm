#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	// ���ĺ� �ҹ��� map
	unordered_map <char, int> alphabet;
	for (int i = 97; i < 123; i++)
		alphabet.insert({i, 0});
		//alphabet.insert(make_pair(i, 0));

	// ���ڿ� �Է�
	string str;
	while (getline(std::cin, str))
	{
		for (int i = 0; i < str.size(); i++)
		{
			auto it = alphabet.find(str[i]);
			if (it != alphabet.end()) {
				alphabet.insert({ str[i], (it->second)++});
			}
		}
	}

	// EOF
	if (std::cin.eof()) {}

	// ��ü ���
	for (auto& const x : alphabet)
		cout << x.first << " = " << x.second << endl;
}
