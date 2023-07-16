#include<stdio.h> 
 //product of natural numbers 
 int main(){ 
  
  
         int a[5],i,product=1; 
  
  
         printf(" Enter  array elements:\n"); 
  
         for(i=0;i<=5;i++) 
         { 
 scanf("%d",&a[i]); 
  
  
  
 } 
 printf("product of array elements:"); 
 for(i=0;i<=5;i++) 
 { 
  
         product= product *a[i]; 
  
 } 
 printf("%d",product); 
  
  
         return 0; 
 }