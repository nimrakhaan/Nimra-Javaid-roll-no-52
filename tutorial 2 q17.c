#include<stdio.h> 
 //i part of pattern question 18 
 int main(){ 
         int i,j,k=1; 
         for(i=1;i<=4;i++) 
         { 
                 for(j=1;j<=i;j++) 
                 { 
                 printf("%d",(k++)%2); 
         } 
  
         printf("\n"); 
         } 
         return 0; 
 } 
  
 