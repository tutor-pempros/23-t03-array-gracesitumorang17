// NIM - NAMA

#include <stdio.h>
#include <stdlib.h>

int main(int _argc, char **_argv)
{
    int n;
  int array[100];
  int sum;

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

}

for(int i = 0 ; i<n; i++) {
    sum += array [i];
}
float ave = (float)sum/n;

printf("%d\n", min);
printf("%d\n", max);
printf("%.2f\n" , ave);
  return 0;
}
