#include <iostream>

int threeSumBruteForce (int arr[], int n) {
	int count = 0;

	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			for(int k = j + 1; j < n; j++) {
				if(arr[i] + arr[j] + arr[k] == 0) {
					count++;

					std::cout << "("
						  << arr[i] << ", "
						  << arr[j] << ", "
						  << arr[k] << ")\n";
				}
			}
		}
	}
	return count;
}

int main() {

	int arr[] = {10, 5, 15, 0, -10, -5, -20};
	int size = 7;

	int result = threeSumBruteForce(arr, size);

	std::cout << "\nTotal Thriples = "
		  << result << std::endl;

	return 0;
}
