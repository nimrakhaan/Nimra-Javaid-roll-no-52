#include<stdio.h> 
 //number is palindrome or not 
 int main(){ 
  
         int n,p,d=0,r; 
         printf("enter the number: \n"); 
         scanf("%d",&n); 
         p=n; 
         while(n>0) 
         { 
                 r =n%10; 
                 d =r+(d*10); 
                 n=n/10; 
         } 
         if(p==d) 
         { 
                 printf("palindrome"); 
         } 
                 else  
  
                 printf("not a palindrome"); 
  
  
         return 0; 
  
 }