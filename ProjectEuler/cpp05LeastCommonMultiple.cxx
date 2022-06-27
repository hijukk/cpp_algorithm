#include <bits/stdc++.h>
using namespace std;

//최대공약수
int gcd(int a, int b){return a%b?gcd(b, a%b):b;}

//최소공배수
int lcm(int a, int b){return a/gcd(a,b)*b;}


int main(int argc, char **argv)
{
	/*1 ~ 10 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 2520입니다.
	그러면 1 ~ 20 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 얼마입니까?*/
	
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	
	//일반 방법
	/*for(int i = 2520; ;i++){
		bool ck = true;
		for(int j = 1 ; j <= 20 ; j++){
			if(i % j != 0){
				ck = false;
				break;
			}
		}
		if(ck){
			cout << i << endl;
			break;
		}
	}*/
	
	//유클리드 호제법 : a와 b의 최대공약수는 a/b를 했을때 나온 나머지와 b의 최대공약수와 같다.
	// a/b = s...r == b/r == p...q 답:q
	int ans = 1;
	for(int i = 1; i <= 20; i++){
		ans = lcm(ans, i);
	}
	
	cout << ans << endl;
	
	return 0;
}

