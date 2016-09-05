#include <iostream>

using namespace std;


void quicksort(int arr[], int low, int high); 
int partition(int arr[], int low, int high); 
void printArray(int arr[], int length); 

int main() {
	int arr[] = {9,3,4,5,7,6,2,1};
	int length = 8;

	quicksort(arr, 0, length-1);

	printArray(arr, length);
}

void quicksort(int arr[], int low, int high) {
	if(low < high) {
		int p = partition(arr, low, high);
		quicksort(arr, low, p-1);
		quicksort(arr, p+1, high);
	}
}

void printArray(int arr[], int length) {
	for(int i=0;i<length;i++) {
		std::cout << arr[i] << " ";
	}
	cout << endl;
}

int partition(int arr[], int low, int high) {
	int pivot = high;
	int l = low;

	for(int i=low;i<high;i++) {
		if (arr[i] <= arr[pivot]) {
			int temp = arr[i];
			arr[i] = arr[l];
			arr[l] = temp;
			l++;
		} 
		
	}
	
	int temp = arr[pivot];
	arr[pivot] = arr[l];
	arr[l] = temp;

	return l;
}
