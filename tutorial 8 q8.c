#include<stdio.h> 
 //factorial 
 int main(){ 
         int n,c,f=1; 
         printf("Enter the number to find the Factorial \n"); 
         scanf("%d",&n); 
         for(c=1;c<=n;c++) 
         { 
                 f=f*c; 
  
         } 
         printf(" factorial =%d",f); 
         return 0; 
 }