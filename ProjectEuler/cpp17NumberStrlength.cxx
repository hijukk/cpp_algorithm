#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string ones[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string ttens[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string tens[10] = {"", "", "twenty", "thirty", "forty ", "fifty", "sixty", "seventy", "eighty", "ninety"};
string hundred = "hundred";
string thousand= "thousand";

string itow(int n){
	string ret;
	if(n==1000) return ones[1] + thousand;
	if(n/100) ret += ones[n/100] + hundred ;//100보다 크면
	if(n/100 && n%100) ret += "and"; //100보다 크고 나머지가 있으면
	if((n%100)/10>=2){ // 10의 자리가 2보다 크면
		ret += tens[(n%100)/10];
		ret += ones[n%10];
	}
	else if((n%100)/10 == 1) ret += ttens[n%10];
	else ret += ones[n%10];
	
	return ret;
}

int main(int argc, char **argv)
{
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	/*1부터 5까지의 수를 영어로 쓰면 one, two, three, four, five 이고,
	각 단어의 길이를 더하면 3 + 3 + 5 + 4 + 4 = 19 이므로 사용된 글자는 모두 19개입니다.

	1부터 1,000까지 영어로 썼을 때는 모두 몇 개의 글자를 사용해야 할까요?

	참고: 빈 칸이나 하이픈('-')은 셈에서 제외하며, 단어 사이의 and 는 셈에 넣습니다.
	예를 들어 342를 영어로 쓰면 three hundred and forty-two 가 되어서 23 글자,
	115 = one hundred and fifteen 의 경우에는 20 글자가 됩니다.*/
	
	int sum = 0;
	string str_sum;
	for(int i = 1; i <= 1000; i++){
		sum += itow(i).size();
	}
	
	cout << sum << endl;
	cout << itow(115).size() << endl;
	
	return 0;
}

//1~10
//one two three four five six seven eight nine ten
//11~19
//eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen
//20~90
//twenty thirty fourty fifty sixty seventy eighty ninety
//
