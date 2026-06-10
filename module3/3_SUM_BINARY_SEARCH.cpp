#include <iostream>

int binarySearch (int arr[], int n, int target) {
	
	int low = 0;
	int high = n - 1;

	while(low <= high) {
		
		int mid = low + (high - low) / 2;

		if(arr[mid] == target) {
			return mid;
		}

		else if(arr[mid] < target) {
			low = mid + 1;
		}
		else { 
			high = mid - 1;
		}
	}

	return - 1;
} 

int threeSumBinarySearch(int arr[], int n) {

	int count = 0;

	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			int target = -(arr[i] + arr[j]);

			int k = binarySearch(arr, n, target);

			if(k > j) {
				count++;
			

				std::cout << "("
			     		  << arr[i] << ", "
			     	  	  << arr[j] << ", "
			    	   	  << arr[k] << ")\n";
			}
		}
	}

	return count;
}

int main() {

	int arr[] = {-40, -20, -10, 0, 5, 10, 30, 40};

	int n = sizeof(arr) / sizeof(arr[0]);

	int result = threeSumBinarySearch(arr, n);

	std::cout << "\nnTotal Triples = " << result << std::endl;

	return 0;
}
