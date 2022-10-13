#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printarray(int a[], int n) {
  printf("[");
  for (int i = 0; i < n; i++) {
    printf(" %d ", a[i]);
  }
  printf("]\n");
}

void swap(int a[], int jmin, int i) {
  int t = a[i];
  a[i] = a[jmin];
  a[jmin] = t;
}

void selectionsort(int a[], int l) {
  for (int i = 0; i < l; i++) {
    int min = INT_MAX;
    int jmin = i;
    for (int j = i; j < l; j++) {
      if (a[j] < min) {
        jmin = j;
        min = a[i];
      }
    }
    swap(a, i, jmin);
  }
}

int main(int argc, char const *argv[]) {
  int a[4] = {2,4,3,1};
  printarray(a, 4);
  selectionsort(a,4);
  printarray(a, 4);
  return 0;
}
