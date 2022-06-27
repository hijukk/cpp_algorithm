#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	/*앞에서부터 읽을 때나 뒤에서부터 읽을 때나 모양이 같은 수를 대칭수(palindrome)라고 부릅니다
	두 자리 수를 곱해 만들 수 있는 대칭수 중 가장 큰 수는 9009 (= 91 × 99) 입니다.
	세 자리 수를 곱해 만들 수 있는 가장 큰 대칭수는 얼마입니까?*/
	
	int ans = 0;
	
	for(int i = 100; i < 1000; i++){
		for(int j = i; j < 1000; j++){
			int tmp = i * j;
			string s = to_string(tmp);
			string rs = s;
			reverse(s.begin(), s.end());
			if(s == rs){
				ans = max(ans,tmp);
			}
		}
	}
	
	cout << ans << endl;
	
	return 0;
}

