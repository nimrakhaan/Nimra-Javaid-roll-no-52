#include<stdio.h> 
 //program to calculate tax ask for income as a input from the user 
 int main(){ 
         int i ; 
         double t; 
         printf("Enter your income"); 
         scanf("%d",&i); 
         if(i<1,50,000){ 
                 printf("No tax"); 
  
         } 
         else if(i>1,50,000&&i<=3,00,000) 
         { 
                 t =i*0.10; 
                 printf("%lf ",t); 
  
         } 
         else if(i>3,00,000&&i<=5,00,000) 
         { 
                 t =i*0.20; 
                 printf("%lf",t); 
  
         }else 
         { 
                 t =i*0.30; 
                 printf("%lf",t); 
  
  
  
         } 
         return 0; 
 }