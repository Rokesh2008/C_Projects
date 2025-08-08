#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int a=rand()%100;
    int num=0;
    while(1){
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num<(a/2)){
            printf("Too Low\n");
        }
        else if (num>(a*2))
        {
            /* code */
            printf("Too High\n");
        }
        else if (num>a)
        {
            /* code */
            printf("High\n");
        }
        else if(num<a){
            printf("Low\n");
        }
        else
        {
            printf("Found");
            break;
        }
        
        
    }
}