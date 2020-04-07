//zoos
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char x[20];
	int z=0, o=0, i;
	cin >> x;
	for(i = 0; i <= 20 ; i++) {
		if(x[i] == 'z'){
			z++;
		}
		else if(x[i] == 'o') {
			o++;			
		}
	}
	if(2*z == o) {
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}
		
	return 0;
}
