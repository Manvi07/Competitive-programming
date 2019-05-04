#include <stdio.h>
int p=1;
void combinationUtil(int arr[], int n, int r,
					int index, int data[], int i);

// The main function that prints all combinations of 
// size r in arr[] of size n. This function mainly
// uses combinationUtil()
void printCombination(int arr[], int n, int r)
{
	// A temporary array to store all combination
	// one by one
	int data[r];

	// Print all combination using temprary array 'data[]'
	combinationUtil(arr, n, r, 0, data, 0);
}

/* arr[] ---> Input Array
n	 ---> Size of input array
r	 ---> Size of a combination to be printed
index ---> Current index in data[]
data[] ---> Temporary array to store current combination
i	 ---> index of current element in arr[]	 */
void combinationUtil(int arr[], int n, int r, int index,
					int data[], int i)
{
	// Current cobination is ready, print it
	if (index == r) {
    printf("%d",p);
		for (int j = 0; j < r; j++)
			printf("  %d " ,data[j]);
		printf("\n");p++;
		return;
	}

	// When no more elements are there to put in data[]
	if (i >= n)
		return;

	// current is included, put next at next location
	data[index] = arr[i];
	combinationUtil(arr, n, r, index + 1, data, i + 1);

	// current is excluded, replace it with next
	// (Note that i+1 is passed, but index is not
	// changed)
	combinationUtil(arr, n, r, index, data, i + 1);
}

// Driver program to test above functions
int main()
{
	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80};
	int r = 5;
	int n = sizeof(arr) / sizeof(arr[0]);
	printCombination(arr, n, r);
	return 0;
}
