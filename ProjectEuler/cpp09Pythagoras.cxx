#include <bits/stdc++.h>
using namespace std;

int sq(int a){return a*a;}

int main(int argc, char **argv)
{
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	
	for(int a = 1; a <= 1000/3; a++){ //a는 제일 작기때문에 /3
		for(int b = a+1; a+b <= 1000; b++){//b의 최대값은 절대 1000이 될수없음
			int c = 1000-a-b;
			if(sq(a) + sq(b) == sq(c)){
				cout << a*b*c << endl;
				cout << a << ' ' << b << ' ' << c << endl;
				return 0;
			}
		}
	}
	
	
	
	return 0;
}

