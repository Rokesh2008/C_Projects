#include<stdio.h>
#include<string.h>
int calenderdesign[7][7]{
    {}
};
int ask(){
    int year,month;
    printf("Enter the year: ");
    scanf("%d",&year);
    printf("Enter the month number: ");
    scanf("%d",&month);
    int daysinmonth[12]={31,28,31,30,31,30,31,30,31,30,31,30};
    if((year%4==0 && year%100!=0) || (year%400==0)){
        daysinmonth[1]=29;
    }
    int startday;
    startday=(year-1900)%7;
    createcalender(startday,daysinmonth);
}
int createcalender(int starting,int daysinthemonths){
    printf("\n");
    printf("S\tM\tT\tW\tT\tF\tS");
        
}
int main(){
    ask();    
}