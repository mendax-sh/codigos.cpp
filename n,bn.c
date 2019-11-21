#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int n, num, k, primo;

    for (n=1;n<=100;n++){
        scanf("%d",&num);
        printf("1 ao 100 quem é primo");

        for(k=2; k<=(int)(num/2); k++){
                 if((num%k)==0){
                 printf("não primo");
                 break;
                 }

        }

    }
    if(primo==0){
    printf("n%d é primo", num);
    }


}
