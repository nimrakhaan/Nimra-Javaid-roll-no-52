#include<stdio.h> 
 //reverse of 4 digit number 
 int main(){ 
         int n ,r ,d ,p=0; 
         printf("enter any  4 digit number: \n"); 
         scanf("%d",&n); 
         d=n; 
         while(n>0) 
         { 
                 r=n%10; 
                 printf("%d ",r); 
  
  
                 n=n/10; 
 } 
         return 0; 
 }