#include <bits/stdc++.h> 
using namespace std; 

void subsequence(char s[], char t[], int n, int k) 
{ 
	int last = 0, cnt = 0, new_last = 0, size = 0; 

	// Starting from largest charter 'z' to 'a' 
	for (char ch = 'z'; ch >= 'a'; ch--) { 
		cnt = 0; 

		// Counting the frequency of the character 
		for (int i = last; i < n; i++) { 
			if (s[i] == ch) 
				cnt++; 
		} 

		// If frequency is greater than k 
		if (cnt >= k) { 

			// From the last point we leave 
			for (int i = last; i < n; i++) { 

				// check if string contain ch 
				if (s[i] == ch) { 

					// If yes, append to output string 
					t[size++] = ch; 
					new_last = i; 
				} 
			} 

			// Update the last point. 
			last = new_last; 
		} 
	} 
	t[size] = '\0'; 
} 

// Driver code 
int main() 
{ 
	string a;
    cin >> a; 
	int n = a.length();
    char s[n+1];
    strcpy(s, a.c_str()); 
	int k = 1; 
	char t[n+1]; 
    // cout << s<< endl << t << endl << n-1 << endl << k << endl;
	subsequence(s, t, n , k); 
	cout << t << endl; 
	return 0; 
} 
