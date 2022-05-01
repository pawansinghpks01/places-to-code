/*
Question Source: "HackerRank (Project Euler)"
Problem URL: "https://www.hackerrank.com/contests/projecteuler/challenges/euler003/problem"
Solution by: "https://github.com/pawansinghpks01"
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	
    //Test cases
	long int t;
	cin>>t;
    
	while(t--){
	
		long long n;
		cin>>n;
		long long f;
	    while (n%2 == 0)
    	{
    		f=2;
        	n = n/2;
    	}
		for (long long i = 3; i <= sqrt(n); i = i+2)
    	{
               while (n%i == 0)
        		{
        			f=i;
					n = n/i;
        		}
    	}
 		if (n > 2)	f=n;
    
    	cout<<f<<endl;
	}
	return 0;
}