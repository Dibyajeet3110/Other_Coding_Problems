#include <bits/stdc++.h>
using namespace std; 
// Function to sort arr[] of size n using bucket sort 
void bucketSort(float arr[], int n) { 
	//  We Creat n empty buckets 
	vector<float> b[n]; 
	// Now we will Put array elements in different buckets 
	for (int i = 0; i < n; i++) { 
		int bi = n * arr[i]; // Index in bucket 
		b[bi].push_back(arr[i]); 
	} 
	// Now we will Sort individual buckets 
	for (int i = 0; i < n; i++){
		sort(b[i].begin(), b[i].end()); 
	}
	//Finally we will put it all buckets into arr[] 
	int index = 0; 
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < b[i].size(); j++) 
			arr[index++] = b[i][j]; 
} 
int main() { 
	float arr[] = { 0.9897, 0.6565, 0.19656, 0.261234, 0.25, 0.1434 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "The UnSorted array is \n"; 
	for (int i = 0; i < n; i++){ 
		cout << arr[i] << " "; 
	}
	cout<<endl;
	bucketSort(arr, n); // bucketsort fucntion 
	cout << "Sorted array is \n"; 
	for (int i = 0; i < n; i++){ 
		cout << arr[i] << " "; 
	}
	cout<<endl;
	return 0; 
} 