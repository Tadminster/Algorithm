#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	// 알파벳 소문자 map
	unordered_map <char, int> alphabet;
	for (int i = 97; i < 123; i++)
		alphabet.insert({i, 0});
		//alphabet.insert(make_pair(i, 0));

	// 문자열 입력
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

	// 전체 출력
	for (auto& const x : alphabet)
		cout << x.first << " = " << x.second << endl;
}
