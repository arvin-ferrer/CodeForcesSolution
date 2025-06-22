#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){

  int t;
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    int n;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int)* n);
    for (int j = 0; j < n; j++){
      scanf("%d", &arr[j]);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++){
      if (arr[i] > max) max = arr[i];
    }
    for (int i = 0; i < n; i++){
      if (arr[i] < min) min = arr[i];
    }
    printf("%d\n", max-min);
  }

}
