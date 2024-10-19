#include <stdio.h>

int addsum(int a[], int n ){   // 어레이의 요소들을 순서대로 넣기

    int result = 0;
    if(n==0){
        return 0;
    }else if(n<0){
        return a[n-1] + addsum(a[],n-2);
    }
}


int main(){

    int elements[] = {1,123,5,41,64,14,15,8,14,664,775,9,23,6,551,634,773,846,847,98,1,2,5,4,45,12,};
    int n = 10;
    int result = addsum(elements,n);

    printf("%d", result);

    return 0;
}