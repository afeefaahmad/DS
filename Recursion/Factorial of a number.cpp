#include <iostream>
using namespace std;

int fact(int n){
	
	if (n==0) return 1;
	int ans = fact(n-1);
	return n*ans;
}


int main() {
	int n;
	cin >> n;
	if (n<0) 
		cout<< "Error";
	else
		cout << fact(n);
    
return 0;
}
