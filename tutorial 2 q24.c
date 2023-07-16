#include<stdio.h> 
  
 //display series 1 3 5 7...n 
 int main(){ 
         int i,n; 
         printf("enter the value \n"); 
         scanf("%d",&n); 
         for(i=1;i<=n;i++) 
  
         { 
                 printf("%0.f /n", pow(2,i)); 
  
         } 
  
         return 0; 
  
 }