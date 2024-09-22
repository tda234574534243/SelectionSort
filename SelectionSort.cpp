#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int SelectionSort(vector<int>& arr, int& n){
	for (int i = 0; i < n - 1; i++){
		int minpos = i;
		for (int j = i + 1; j < n - 1; j++){
			if (arr[minpos] > arr[j]){
				minpos = j;
			}
		}
		swap(arr[minpos], arr[i]);
	}
}

int main(){
	vector<int> arr;
	int num;
	while(cin >> num){
		arr.push_back(num);
	}
	
	int n = arr.size();
	SelectionSort(arr, n);
	
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}
