// NIM - NAMA

#include <stdio.h>

int main(int _argc, char **_argv){
int n = 8;
int array [n];

 scanf("%d", &array[n]);

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

printf("%d\n", min);
printf("%d\n", max);
  return 0;
}
