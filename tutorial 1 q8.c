#include<stdio.h> 
 //program to add four digit number 
 int main(){ 
         int r, n,sum=0; 
         printf("Enter the 4 digits:\n"); 
         scanf("%d ",&n); 
         while(n!=0) 
         { 
                 r=n%10; 
                 sum=sum+r; 
                 n=n/10; 
         } 
         printf(" sum of digits= %d",sum); 
  
  
         return 0; 
 }