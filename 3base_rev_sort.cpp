#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;

	vector<int> v;
	while (n)
	{
		v.push_back(n % 3);//맨 뒤부터 n % 3의 값 넣기.
		n /= 3;
	}

	reverse(v.begin(), v.end()); //v.begin(): 시작부터 v.end() 끝까지 rev

	for(int i = 0; i < v.size(); ++i)
		answer += pow(3, i) * v[i];//pow: 3의 거듭제곱

	return answer;
}

#include <iostream>

int main(void)
{
	cout << solution(45);
	return (0);
}