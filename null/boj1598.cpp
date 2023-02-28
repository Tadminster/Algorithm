//https://www.acmicpc.net/problem/1598

#include <iostream>

int main() 
{
	// 입력 받을 두개의 자연수
	int x, y;
	std::cin >> x >> y;

	// x<y 이면 swap
	if (x > y) 
	{
		int temp = x;
		x = y;
		y = temp;
	}

	// 두 자연수를 4의 배수로 만듦
	int x4, y4;
	x4 = x % 4 == 0 ? 0 : (4 - x % 4);
	y4 = y % 4 == 0 ? 0 : (4 - y % 4);

	// 두 자연수의 row, col 차
	int row, col;
	col = y4 - x4;
	row = (y + y4) / 4  - (x + x4) / 4;

	std::cout << row+col;
}