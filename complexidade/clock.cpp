/* clock example: insertion sort*/
#include <math.h>
#include <stdio.h>
#include <time.h>

void insertionSort(int arr[], int n) {
  int i, key, j;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;

    // Move elements of arr[0..i-1],
    // that are greater than key,
    // to one position ahead of their
    // current position
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

void initialize_arr(int arr[], int n) {
  for (int i = 0; i < n; i++)
    arr[i] = rand();
}

int main() {
  clock_t t;
  int size_arr = 10000;
  int *arr;
  int itters = 10;
  float sum = 0;

  while (size_arr <= 100000) {
    arr = (int *)malloc(size_arr * sizeof(int));

    initialize_arr(arr, size_arr);

    sum = 0;

    for (int iterr = 0; iterr < itters; ++iterr) {
      t = clock();
      insertionSort(arr, size_arr);
      t = clock() - t;

      sum += ((float)t) / CLOCKS_PER_SEC;
      initialize_arr(arr, size_arr);
    }

    printf("Median for elapsed time with N=%d: %f seconds\n", size_arr,
           sum / itters);
    size_arr += 10000;
  }

  delete arr;
  return 0;
}