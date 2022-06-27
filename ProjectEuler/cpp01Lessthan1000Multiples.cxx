#include <iostream>
#include <bitset>
using namespace std;

int main(int argc, char **argv)
{
	cout << "Hello" << endl;
	cout << "----------------------------" << endl;
	
	int sum = 0;
	
	for(int i=0; i<1000; i++){
		if(i%3 == 0 || i%5 == 0)
			sum += i;
		
	}
	
	cout << sum << endl;
	
	return 0;
}

