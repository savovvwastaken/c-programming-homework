#include<stdio.h>

int main(){
    int n, a,  sum = 0 ;
    float avg;
   

    scanf("%d", &n );
    for(int i = 0;n>i ;i++){
     scanf("%d", &a);
       sum = sum+a;
    }
    avg = (float)sum/n;
    printf("Sum is %d", sum);
  printf("Avg is %.2f", avg);
return 0; 

}
