#include<stdio.h> 
 //pattern question 18 part h 
 int main(){ 
         int i,j,k; 
         for(i=1;i<=4;i++) 
         { 
                 for(j=1;j<=7;j++) 
                 {  
                 k=i; 
  
                 if(j>=5-i&&j<=3+i){ 
  
                 printf("%d",k); 
                 j<4?k--:k++; 
         } 
                 else 
                 printf(" "); 
         } 
         printf("\n"); 
  
         } 
         return 0; 
  
 }