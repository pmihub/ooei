#include<iostream>
#include<cmath>

using namespace std; 

int main() {
	int iNum1 = 1, iNum2 = 1, iSum, iCinNum; 
	cin >> iCinNum;
	while (iNum1 + iNum2 <= iCinNum) {

		iSum = iNum1 + iNum2;
		iNum1 = iNum2;
		iNum2 = iSum;
		cout << iNum2 << ";";
	}
	return 0;
}