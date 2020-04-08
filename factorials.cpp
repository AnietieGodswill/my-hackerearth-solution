//Factorial!
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,fact=1;
	cin >> n;
	for( int i = 2 ; i <= n ; i++) {
		fact = fact * i ;
		
	}
	cout<<fact;
	
	return 0;
}

