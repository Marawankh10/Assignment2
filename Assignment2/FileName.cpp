//Marawan Khaled 241007323
#include<stdio.h>
void read_array(int arr[], int size) {
	for (int i = 0; i < size; i++)
		scanf_s("%d", &arr[i]);
}
int linear_search(int arr[], int size, int target) {
	for (int i = 0; i < size;i++) {
		if (arr[i] == target) {
			return i;
		}
		
	}
	return -1;
}
int Binary_search(int arr[], int size, int target) {
	int low = 0, High = size - 1, mid;
	while (low <= High) {
		mid = (low + High) / 2;
		if (arr[mid] == target)
			return mid;
		else
			if (arr[mid] < target)
				low = mid + 1;
			else     //arr[mid] >target
				High = mid - 1;
	}
	return -1;
}
void Bubble_sort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1-i; j++) {
			if (arr[j] > arr[j + 1]) {
				int	temp = arr[j + 1];
				    arr[j+1]=arr[j] ;
					arr[j] = temp;
            }
		}
	}
}
void Reverse_array(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				int	temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

	int main() {
		int array[100], size, low, High, index, result, target;
		int choice;
	
		printf("Enter no. of elements: ");
		scanf_s("%d", &size);
		printf("Enter %d elements\n",size);
		 read_array(array , size);
		 Bubble_sort(array,  size);
		 for (int i = 0; i < size;i++)
			 printf("%d ",array[i]);
		 printf("\nEnter target\n");
		 scanf_s("%d", &target);
		 printf("Enter 1 to use linear search or 2 for Binary search:\n");
		 scanf_s("%d", &choice);
		 if (choice == 1)
			 index = linear_search(array, size, target);
		 else
			 index = Binary_search(array, size, target);
		 printf("target %d found at index = %d\n",target,index);
		 Reverse_array(array, size);
		 for (int i = 0; i < size;i++)
			 printf("%d ", array[i]);
	}