#include <stdio.h>

int fibonacci(int n){
   
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }else if(n>2){
    return (fibonacci(n-2) + fibonacci(n-1));}
    else{
        return -1;
    }
}

int main(){
    int n =0;
    printf("enter order pibonacci\n");
    scanf("%d",&n);

    int result = fibonacci(n);

    printf("%d",result);



    return 0;
}