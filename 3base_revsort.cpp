#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
	
	vector<int> v; //vector 정수형 동적?배열 변수 v 선언 
	
	while (n) // n이 0이 될 때까지
	{
		v.push_back(n % 3); //v.push_back() 배열의 뒤 부터 값을 집어넣음 (스택?)
		n /= 3; 
	}
	
	reverse(v.begin(), v.end()); // v.begin() 배열 시작부터, v.end() 끝까지 역순으로 뒤집기

	for (int i = 0; i < v.size(); ++i) // v.size() 배열 사이즈
		answer += v[i] * pow(3, i); // 3의 i 제곱만큼 곱하면서 answer에 더해줌
	return answer;
}