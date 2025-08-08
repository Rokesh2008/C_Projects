#include <stdio.h>
#include <string.h>
struct students{
    char name[50];
    int age;
    float mark;
};
int main(){
    
    int std,choise,search_age;
    char search_choise[50],nam[50];
    int i=1;
    printf("How many students: ");
    scanf("%d",&std);
    struct students s[std];
    for(int i=0;i<std;i++){
        printf("Enter the name: ");
        scanf("%s",s[i].name);
        printf("Enter the age: ");
        scanf("%d",&s[i].age);
        printf("Enter the mark: ");
        scanf("%f",&s[i].mark);
    } 
    printf("do you want to search anything[0/1]: ");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:
        printf("What will you want to search with[name/age]:");
        scanf("%s",search_choise);
        if(strcmp(search_choise,"name")==0){
            printf("Enter the name: ");
            scanf("%s",nam);
            for(int j=0;j<std;j++){
                if(strcmp(s[j].name,nam)==0){
                    printf("The age of the student is: %d\n",s[j].age);
                    printf("The mark of the student is: %f\n",s[j].mark);
                    break;
                }                
            }            
        }
        else if(strcmp(search_choise,"age")==0)
        {
            printf("Enter the age of the student: ");
            scanf("%d",&search_age);
            for(int k=0;k<std;k++){
                if(s[k].age==search_age){
                    printf("The name of the student is: %s\n",s[k].name);
                    printf("The mark of the student is: %f\n",s[k].mark);
                    break;
                }                
            }
        }
        else{
            printf("Invalid Choise...");
        }        
        break;
    
    default:
        printf("Thank you for using");
        break;
    }
    printf("Thanks for using");
}