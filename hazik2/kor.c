#include <stdio.h> 
double terulet(double n){

  return n*n*(22.0/7.0);
}
double kerulet(double n){

  return 2*n*(22.0/7.0);
}
int main() { 
  double r;
    
 
    printf( "Add meg a kor sugarat:\n " ); 
    scanf( "%lf", &r );

 
    printf( "A kor terulete: %.3lf a kor kerulete pedig:%.3lf\n",terulet(r),kerulet(r)); 
 

    return 0; 
} 