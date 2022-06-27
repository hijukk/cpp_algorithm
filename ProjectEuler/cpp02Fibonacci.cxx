#include <iostream>
#include <bitset>
using namespace std;

int main(int argc, char **argv)
{
	
	//피보나치(Fibonacci) 수열의 각 항은 바로 앞의 항 두 개를 더한 것입니다. 1과 2로 시작하는 경우 이 수열은 아래와 같습니다.
	//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
	//4백만 이하의 짝수 값을 갖는 모든 피보나치 항을 더하면 얼마가 됩니까?
	
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	
	int first = 1;
	int second = 2;
	int sum;
	int sums = 0;
	
	while(1){
		sum = first + second;
		first = second;
		second = sum;
		//cout << first << " " << second << " " << sum << endl;
		if(sum % 2 == 0){
			//cout << first << " " << second << " " << sum << endl;
			if(sum > 4000000){
				break;
			}
			sums += sum;
		}
	}
	
	cout << sums << endl;
	
	return 0;
}

