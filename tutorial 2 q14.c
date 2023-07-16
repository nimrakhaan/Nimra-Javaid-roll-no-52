#include<stdio.h> 
 //printing * pattern q 18 part a 
 int main(){ 
         int i ,j,k; 
  
  
         for(i=1;i<=4;i++ ) 
         { 
                 for(j=4;j>i;j--); 
                 { 
                         printf("  "); 
                 } 
                 for(k=1;k<=i;k++) 
                 { 
  
                 printf( " * "); 
         } 
         printf("\n"); 
  
         } 
  
  
  
  
  
  
         return 0; 
 }