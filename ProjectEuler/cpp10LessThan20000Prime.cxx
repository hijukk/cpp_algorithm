#include <bits/stdc++.h>
using namespace std;

bool ck[2000001];//bool 배열 메모리 좀더 줄임

int main(int argc, char **argv)
{
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	/*10 이하의 소수를 모두 더하면 2 + 3 + 5 + 7 = 17 이 됩니다.
	이백만(2,000,000) 이하 소수의 합은 얼마입니까?*/
	
	long long sum = 0;
	for(long long i =2; i < 2000000; i++){
		if(ck[i]) continue; // 합성수이면 넘어감
		sum += i;//소수이면 더해줌
		for(long long j = i*i; j <=2000000; j+=i){ //i제곱 미만에 i배수들은 이미 다른수로 인해 합성수임을 체크됨
			ck[j] = true;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}

