#include <stdio.h>
#include <stdlib.h>
int main(){
    int numa,numb,choise,dive,mul,sub,add;
    printf("Enter a number: ");
    scanf("%d",&numa);
    printf("Enter another number: ");
    scanf("%d",&numb);
    printf("Enter your choise in number from(1to4)[+,-,*,/]: ");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:
        
        add=numa+numb;
        printf("The sum is: %d",add);
        break;
    case 2:
        
        sub=numa-numb;
        printf("The diff is: %d",sub);
        break;
    case 3:
        
        mul=numa*numb;
        printf("The prod is: %d",mul);
        break;
    case 4:
        
        dive=numa/numb;
        printf("The div is: %d",dive);
        break;            
    
    default:
        printf("Wrong choise");
        break;
    }
}