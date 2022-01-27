#include<stdio.h>

int main()
{
   int n;

   printf("Enter any number: ");
   scanf("%d",n);
   float result = sum(n);
  printf("%f",result);

}
float sum(int n){

    if(n==1){
    return 1;}
    else{
            if(n%2!=0){
       return (1/n)+sum(n-1);
            }
    else
        {
         return -(1/n)+sum(n-1);
}
}
}
