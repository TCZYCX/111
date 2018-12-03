#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 3f");
    while(1){
    int n,i,a;
    printf("Please Enter The Number:\n");
    scanf("%d",&n);
    a=n;
    i=0;
    while(a>=10){
        a=a/10;
        i++;
    }
    if(n>0&&n<10000){
        if(i==0){
            printf("%d:[0-9]\n",n);
        }
        if(i==1){
            printf("%d:[10-99]\n",n);
        }
        if(i==2){
            printf("%d:[100-999]\n",n);
        }
        if(i==3){
            printf("%d:[1000-9999]\n",n);
        }
    }
    else{
        printf("Error!\n");
    }
    }
    return 0;
}
