/*
Question Source: "HackerRank (Project Euler)"
Problem URL: "https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem"
Solution by: "https://github.com/pawansinghpks01"
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    //Test Cases
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum=0;
        long long prev = 0, curr = 1, next = 1 ;  
    	while(next<n)
        {
        	next=prev+curr;
			prev=curr;
			curr=next;
			if(next%2==0 && next<=n)
				sum+=next;
		}
        cout<<sum<<endl;
    }
    return 0;
}