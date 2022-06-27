#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int num[500];

void two(){
	for(int i = 0; i < 500; i++){
		num[i] *= 2; // 각자리수 곱
	}
}

void op(){//각자리수 올림
	for(int i = 0; i < 499; i++){
		num[i+1] += num[i]/10; //i자리 수가 10보다 크면 윗자리에 더해주고
		num[i] %= 10; //나머지만 남김
	}
}

int main(int argc, char **argv)
{
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	
	/*2^15 = 32768 의 각 자릿수를 더하면 3 + 2 + 7 + 6 + 8 = 26 입니다.
	2^1000의 각 자릿수를 모두 더하면 얼마입니까?*/
	
	num[0] = 1;//일의 자리
	for(int i = 0; i < 1000; i++){
		two();
		op();
	}
	
	int sum = 0;
	for(int i = 0; i < 500; i++){
		sum += num[i]; //각자리수 더해줌
	}
	cout << sum << endl;
	
	return 0;
}

