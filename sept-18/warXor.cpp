#include <bits/stdc++.h>
using namespace std;

int GetPair(int arr[], int n)
{
	int ans = 0; // Initialize result

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++){
		    cout<<arr[i]<<" xor "<<arr[j]<<" = "<<(arr[i] ^ arr[j])<<" ("<<i+1<<" , "<<j+1<<")"<<endl;
		}
	return 0;
}

int main()
{
	int arr[] = { 2 ,4, 8, 1, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << pairORSum(arr, n) << endl;
	return 0;
}
