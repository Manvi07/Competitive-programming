#include <bits/stdc++.h>
#define for(i,n) for(int i=0; i<n; i++)
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n,A = 0, B = 0, tempA = 0, tempB = 0;

int main(){
	cin>>n;
    int a[n];
	for(i,n){
        cin >> a[i];
		if(a[i] == 0){
			tempA++;
			tempB--;
		}
		else{
			tempA--;
			tempB++;
		}
		A = max(A,tempA);
		B = max(B,tempB);
	}
 
	cout<<B+A+1<<endl;
 
	return 0;
}