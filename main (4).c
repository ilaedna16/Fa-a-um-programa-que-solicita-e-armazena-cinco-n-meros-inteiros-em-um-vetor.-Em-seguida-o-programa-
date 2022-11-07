#include<stdio.h> 
main () { 
    
    int valor[5]; 
    int i; 
    int soma=0; 
    
    for ( i=0; i<5; i++)
 { 
     
     printf ("qual o %do valor?\n",i+1); 
     scanf ("%d", &valor[i]); 
 
 soma= soma + valor[i]; 
 } 
 
 printf ("a soma vale %d", soma);
 
} 
 
 
    