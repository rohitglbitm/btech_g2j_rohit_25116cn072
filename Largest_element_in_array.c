#include <stdio.h>

int main() {
  int size, i, largest;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int array[size]; 

  printf("Enter %d elements of the array:\n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }
  largest = array[0];
  for (i = 1; i < size; i++) {
    
    if (array[i] > largest) {
      largest = array[i];
    }
  }
  printf("The largest element in the array is: %d\n", largest);

  return 0;
}