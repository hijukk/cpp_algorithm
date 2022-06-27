#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAXN = 1e6; //10^6

int dp[MAXN + 5];//dp[i] : i가 1까지 도달하는 길이
map<ll,int> dp2;

ll mx;

int f(ll ith){
	mx = max(mx, ith);
	int &ret = ith> MAXN ? dp2[ith] : dp[ith];
	if(ret) return ret;
	if(ith & 1) return ret = f(3*ith+1)+1;
	return ret = f(ith/2)+1;
}

int main(int argc, char **argv)
{
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	
	/*양의 정수 n에 대하여, 다음과 같은 계산 과정을 반복하기로 합니다.

	n → n / 2 (n이 짝수일 때)
	n → 3 n + 1 (n이 홀수일 때)

	13에 대하여 위의 규칙을 적용해보면 아래처럼 10번의 과정을 통해 1이 됩니다.

	13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
	아직 증명은 되지 않았지만, 이런 과정을 거치면 어떤 수로 시작해도 마지막에는 1로 끝나리라 생각됩니다.
	(역주: 이것은 콜라츠 추측 Collatz Conjecture이라고 하며, 이런 수들을 우박수 hailstone sequence라 부르기도 합니다)

	그러면, 백만(1,000,000) 이하의 수로 시작했을 때 1까지 도달하는데 가장 긴 과정을 거치는 수는 얼마입니까?

	참고: 계산 과정에는 백만을 넘어가는 수가 나와도 괜찮습니다.*/
	
	//DP
	dp[1] = 1;
	int mx_idx = 0;
	for(ll i = 2; i <= MAXN; i++){
		dp[i] = f(i);
		if(dp[mx_idx] < dp[i]){
			mx_idx = i;
		}
	}
	
	cout << mx << endl;
	cout << mx_idx << endl;
	cout << dp[mx_idx] << endl;
	
	
	return 0;
}

