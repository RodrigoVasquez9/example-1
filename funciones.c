#include <stdio.h>

int sumas(int n,int m){
  int m1,m2;
  if(n%2==0 && m%2==0){
   return n+m;
  }else{
   if(n%2!=0 && m%2!=0){
    return n*m;
   }else{
    m1=n%10;
    m2=m%10;
    return m1+m2;
   }
  }
}
