#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 500000;

int ck[MAX_N]; //0이면 소수 1이면 합성수를 알려주는 체크배열

void era(){
	for(int i = 2; i < MAX_N; i++){
		if(ck[i]) continue;//합성수이면 볼것도 없이 넘어감
		for(int j = 2*i; j < MAX_N; j+=i){ //소수이면 소수의 배수들은 모두 1 체크
			ck[j] = 1;
		}
	}
}

int main(int argc, char **argv)
{
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	
	/*소수를 크기 순으로 나열하면 2, 3, 5, 7, 11, 13, ... 과 같이 됩니다.
	이 때 10,001번째의 소수를 구하세요.*/
	
	era();
	int cnt = 0;
	for(int i = 2; i < MAX_N; i++){
		if(ck[i] == 0) cnt++; //소수면 카운트 업
		if(cnt == 10001){
			cout << i << endl; //10001번째 소수
			return 0;
		}
		
	}
	
	
	
	
	return 0;
}

