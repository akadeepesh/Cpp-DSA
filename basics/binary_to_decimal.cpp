// Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.
#include<iostream>
#include<cmath>
using namespace std;
int binary2dec(long long num){
	int rem,dec=0;
	for(int i = 0; num!=0; i++){
		rem = num%10;
		num /= 10;
		dec += rem * pow(2,i);
	}
	return dec;
}
int main() {
	long long num;
	cin>>num;
	cout<<binary2dec(num);
	return 0;
}