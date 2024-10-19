#include <stdio.h>

int factorial(int n){
    if(n==0){
        printf("end function\n");
        return 1;
    }else{

    int result = n * factorial(n-1);

    return result;
    }
}



int main(){
    int n;  
    scanf("%d",&n);
    int result = factorial(n);
    printf("%d", result);
    return 0;
}