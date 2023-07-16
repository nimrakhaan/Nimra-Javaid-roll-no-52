#include<stdio.h> 
 //display the series 1 3 5...n 
 int main(){ 
         int n,i; 
         printf("enter the number:\n"); 
         scanf("%d",&n); 
         for(i=1;i<=2*n-1;i=i+2) 
         { 
         printf("%d",i); 
  
         } 
  
         return 0; 
 }