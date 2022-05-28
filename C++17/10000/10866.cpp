#include <iostream>
#include <cstdio>
#include <deque>
#include <string>
using namespace std;

int main()
{
	int n, X;
	string str;
	deque<int> dq;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		cin >> str;
		
		if(str == "push_front") {
			cin >> X;
			dq.push_front(X);
		}
		
		else if(str == "push_back") {
			cin >> X;
			dq.push_back(X);
		}
		
		else if(str == "pop_front") {
			if(dq.size()) {
				printf("%d\n", dq.front());
				dq.pop_front();
			}
			else {
				printf("-1\n");
			}
		}
		
		else if(str == "pop_back") {
			if(dq.size()) {
				printf("%d\n", dq.back());
				dq.pop_back();
			}
			else {
				printf("-1\n");
			}
		}
		
		else if(str == "size") {
			printf("%d\n", dq.size());
		}
		
		else if(str == "empty") {
			if(dq.size()) {
				printf("0\n");
			}
			else {
				printf("1\n");
			}
		}
		
		else if(str == "front") {
			if(dq.size()) {
				printf("%d\n", dq.front());
			}
			else {
				printf("-1\n");
			}
		}
		
		else if(str == "back") {
			if(dq.size()) {
				printf("%d\n", dq.back());
			}
			else {
				printf("-1\n");
			}
		}
	}
	return 0;
}