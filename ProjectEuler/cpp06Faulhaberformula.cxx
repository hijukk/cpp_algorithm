#include <bits/stdc++.h>
using namespace std;

int sq(int a){return a*a;}

int main(int argc, char **argv)
{
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	
	/*1부터 10까지 자연수를 각각 제곱해 더하면 다음과 같습니다 (제곱의 합).
	12 + 22 + ... + 102 = 385
	1부터 10을 먼저 더한 다음에 그 결과를 제곱하면 다음과 같습니다 (합의 제곱).
	(1 + 2 + ... + 10)2 = 552 = 3025
	따라서 1부터 10까지 자연수에 대해 "합의 제곱"과 "제곱의 합" 의 차이는 3025 - 385 = 2640 이 됩니다.
	그러면 1부터 100까지 자연수에 대해 "합의 제곱"과 "제곱의 합"의 차이는 얼마입니까?*/
	
	int sum1 = 0, sum2 = 0;
	
	for(int i = 0; i <= 100; i++){
		sum1 += i;
		sum2 += i*i;
	}
	cout << abs(sum1*sum1 - sum2) << endl;
	
	cout << "----------------------------" << endl;
	//합의 제곱
	int ssum1 = sq((100+1)*100/2);
	//제곱의합(1~n까지 제곱의합 공식)
	int ssum2 = (100)*(100+1)*(2*100+1)/6;
	
	cout << abs(ssum1 - ssum2) << endl;
	
	return 0;
}

