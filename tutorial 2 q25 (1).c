#include<stdio.h> 
 //g part of pattern question 18 
 int main(){ 
  
  
         int a[10],i,sum=0; 
         printf("enter the number:\n"); 
         for(i=0;i<10;i++) 
         { 
                 scanf("%d",&a[i]); 
                 sum=sum+a[i]; 
  
         } 
         printf("\n sum=%d\n",sum); 
         printf("\naverage =%.02f\n",sum/10.0); 
         return 0; 
 }