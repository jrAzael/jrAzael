#include<stdio.h>
int main (){
    int A[10]={3,5,6,8,4,7,8,5,3,1};
    int B[10]={3,4,6,8,9,1,2,3,0,9};

      printf("resultado de A[3] mod (B[2]/2) = %d \n",A[3] % (B[2]/2));
      printf("resultado de B[A[1]] - A[9] = %d \n",B[A[1]] - A[9]);
      printf("resultado de A[0] + A[1+2]= %d \n",A[0] + A[1+2]);
      printf("resultado de A[5] + B[5] = %d \n",A[5] + B[5]);
      printf("resultado de (A[3] / (B[2])/2)= %d \n",(A[3] / B[2])/2);




    



}