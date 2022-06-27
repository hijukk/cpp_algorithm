#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//100! < 100^100
//100!은 200자리가 안될것이다.

int arr[200];

void times(int n){
	for(int i = 0; i <= 200; i++) arr[i] *= n; //각자리에 n곱하기
}

void op(){ //올림 작업
	for(int i = 0; i < 199; i++){
		arr[i+1] += arr[i]/10;
		arr[i] %= 10;
	}
}

int main(int argc, char **argv)
{
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	/*n! 이라는 표기법은 n × (n − 1) × ... × 3 × 2 × 1을 뜻합니다.

	예를 들자면 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800 이 되는데,
	여기서 10!의 각 자릿수를 더해 보면 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27 입니다.

	100! 의 자릿수를 모두 더하면 얼마입니까?*/
	
	arr[0] = 1;
	for(int i = 2; i <= 100; i++){ //100부터 2까지 곱하기
		times(i);
		op();
	}
	
	int sum = 0;
	for(int i = 0; i <= 200; i++) sum += arr[i];
	
	cout << sum << endl;
	
	return 0;
}

