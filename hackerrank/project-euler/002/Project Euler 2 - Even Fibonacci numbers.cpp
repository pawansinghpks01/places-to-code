/*
Question Source: "HackerRank (Project Euler)"
Problem URL: "https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem"
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
        /*Logic to generate terms of fibonacci series*/
    	while(next<n)
        {
        	next=prev+curr;
			prev=curr;
			curr=next;
            /*Adding only the even value terms*/
			if(next%2==0 && next<=n)
				sum+=next;
		}
        cout<<sum<<endl;
    }
    return 0;
}