#include<iostream> 
#include<cstring> 
using namespace std; 
int count(string str) 
{ 
	int N = str.length(); 

	// create a 2D array to store the count of palindromic 
	// subsequence 
	int ar[N+1][N+1]; 
	memset(ar, 0 ,sizeof(ar)); 

	// palindromic subsequence of length 1 
	for (int i=0; i<N; i++) 
		ar[i][i] = 1; 

	// check subsequence of length L is palindrome or not 
	for (int L=2; L<=N; L++) 
	{ 
		for (int i=0; i<N; i++) 
		{ 
			int k = L+i-1; 
			if (str[i] == str[k]) 
				ar[i][k] =ar[i][k-1] + 
							ar[i+1][k] + 1; 
			else
				ar[i][k] = ar[i][k-1] + 
							ar[i+1][k] - 
							ar[i+1][k-1]; 
		} 
	} 

	// return total palindromic subsequence 
	return ar[0][N-1]; 
} 

// Driver program 
int main() 
{ 
	string str;
	cin>>str; 

		cout<< count(str) << endl; 
	return 0; 
} 

