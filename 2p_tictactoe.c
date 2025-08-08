#include <stdio.h>
#include <string.h>
char board[3][3]={
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};
int display(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%c|",board[i][j]);
        }printf("\n");
    }
}
int player_one(){
    int p1;
    char ch;
    printf("Enter 1p choise: ");
    scanf("%d",&p1);
    ch=p1+'0';
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (board[i][j]==ch)
            {
                board[i][j]='X';
            }
            
        }
    }
    display();
    player_one_check();
}
int player_two(){
    int p2;
    char ch;
    printf("Enter 2p choise: ");
    scanf("%d",&p2);
    ch=p2+'0';
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (board[i][j]==ch)
            {
                board[i][j]='O';
            }
            
        }
    }  
    display();
    player_two_check();   
}
int player_one_check(){
    //rows
    int ab;
    int numberm=0;
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2]){            
            ab=8;
        } 
    }
    for(int i=0;i<3;i++){
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i]){            
            ab=8;
        } 
    }    
    if (ab==8)
    {
        printf("Player one won");
    }
    else{
        if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
            printf("Player one Won");
        }
        else if (board[0][2]==board[1][1] && board[1][1]==board[2][0])
        {
            printf("Player one Won");            
        }
        else
        {
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(board[i][j]=='X' || board[i][j]=='O'){
                        numberm++;
                    }
                }
            }
            if(numberm==9){
                printf("Draw");
            }
            else{
            player_two();
            }
        }       
     
    }        
}
int player_two_check(){
    //rows
    int ab,numberm;
    numberm=0;
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2]){            
            ab=8;
        } 
    }
    for(int i=0;i<3;i++){
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i]){            
            ab=8;
        } 
    }     
    if (ab==8)
    {
        printf("Player two won");
    }
    else{
        if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
            printf("Player two Won");
        }
        else if (board[0][2]==board[1][1] && board[1][1]==board[2][0])
        {
            printf("Player two Won");            
        }
        else
        {
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(board[i][j]=='X' || board[i][j]=='O'){
                        numberm++;
                    }
                }
            }
            if(numberm==9){
                printf("Draw");
            }
            else{
            player_one();
            }
        }        
     
    }        
}
int main(){
    display();
    player_one();
}