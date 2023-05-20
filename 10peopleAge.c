#include <stdio.h>

int main() {
  
  int array[10]; 
  int i, sum=0;
  float avg=0;
  
  for(i=0; i<10; i++) {
    printf("Enter the age of person %i: ", i+1);
    scanf("%i", &array[i]);
    sum += array[i];
  }
  
  avg = sum/10.0;
    
  for (i=9; i>=0; i--) {
    printf("\nAge of person %i is: %i", i+1, array[i]);
  }

  printf("\n\nThe sum of the ages is: %i", sum);
  printf("\nThe average of the ages is: %.2f", avg);
  
  return 0;
}
