#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int flag=0;
    if(n==1 || n==0){
        printf("%d is not a prime number");
    }
    else if(n==2){
        printf("%d is even prime number");
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(!flag){
            printf("%d is a prime number",n);
        }
        else {
            printf("%d is not a prime number",n);
        }
    }
}