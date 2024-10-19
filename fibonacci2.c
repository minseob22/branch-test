#include <stdio.h>

fibonacci(int n){
    return (n-1) + (n-2);
}


int main(){
    int n =0;
    int result;
    scanf("%d",&n);

    if(n==1){
        printf("0");
    }else if(n==2){
        printf("1");
    }else if(n>2){
        int a = 0;
        int b = 1;
        int c = a + b;
        for(int i = 3; i <= n; i++){
            
        }
    }
    printf("%d",result);

    return 0;
}