#include <stdio.h>

int size;


int setArrayLength(){

  printf("Wie viele Zahlen möchten sie eingeben?");
  int n;
  scanf("%d", &n);
  return n;
}

int compute_sum(int array[]){

  int x;

  for(x = 0; x < size; x++){

    printf("%d, \n", array[x]);

  }

  int sum = 0;
  int j;
  for(j = 0; j < size; j++){

    sum = sum + (int)array[j];
    printf("%d,%d; ", j, sum);

  }

  return sum;

}

double compute_mean(int array[]){

  double mean = (double)compute_sum(array) / (double)size;

  return mean;

}

int compute_min(int array[]){

  int min = array[0];
  int i;
  for(i = 0; i < size; i++){

    if(min > array[i]){

      min = array[i];

    }

  }
  return min;

}

int compute_max(int array[]){

  int max = array[0];
  int i;
  for(i = 0; i < size; i++){

    if(max < array[i]){

      max = array[i];

    }

  }
  return max;

}


int main(){

  size = setArrayLength();
  int array[size];

  int i;
  for(i = 0; i < size; i++){

    int value = 0;
    printf("%d.te Zahl: ", i+1);
    array[i] = scanf("%d", &value);

  }

  printf("Summe = %d\n", compute_sum(array));
  printf("Miitelwert = %f\n", compute_mean(array));
  printf("Minimum = %d\n", compute_min(array));
  printf("Maximum = %d\n", compute_max(array));


  return 0;
}
