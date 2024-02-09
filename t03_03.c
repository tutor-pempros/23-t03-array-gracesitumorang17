// NIM - NAMA

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int _argc, char **_argv)
{
    int n;
  int array[100];
  int sum;
  int max = INT_MIN;
  int sec_min = INT_MAX;
  int min = INT_MAX;


 scanf("%d", & n);

for (int i = 0; i < n; i++){
    array[i] = i;
    scanf("%d", &array[i]);
}

int max = array[0];
int min = array[0];

for(int i = 0; i<n; i++){
    if(array[i] > max){
        max = array[i];
    }
    if(array[i] < min){
        min = array[i];
    }
    if (array[i] < min){
        sec_min = min;
        min = array[i];
    }
    else if(array[i]) < sec_min && array[i] > min){
        sec_min = array[i];
    }
}

for(int i = 0 ; i<n; i++) {
    sum += array [i];
}

float ave = (float)sum/n;
int jarak = max - sec_min;

printf("%d\n", min);
printf("%d\n", max);
printf("%.2f\n" , ave);
printf("%d\n", jarak);
  
  return 0;
}
