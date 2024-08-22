#include <iostream>
using namespace std;
char number[3][3]={{'1','2','3'}, {'4','5','6'}, {'7', '8', '9'}};
int row, col;
int choice;
char turn='X';
bool draw= false;
//display table
void display_table(){
    system("cls");
	cout<<"\t\tWelcome to tick and cross game\n";
    cout<<"\tPlayer1 [X]\n\tPlayer2 [O]\n";
    
     cout<<"     |     |     \n";
     cout<<"  "<<number[0][0]<<"  |  "<<number[0][1]<<"  |  "<<number[0][2]<<"  \n";
     cout<<"     |     |     \n";
     cout<<"-----|-----|-----\n";
     cout<<"     |     |     \n";
     cout<<"  "<<number[1][0]<<"  |  "<<number[1][1]<<"  |  "<<number[1][2]<<"  \n";
     cout<<"     |     |     \n";
     cout<<"-----|-----|-----\n";
     cout<<"     |     |     \n";
     cout<<"  "<<number[2][0]<<"  |  "<<number[2][1]<<"  |  "<<number[2][2]<<"  \n";
     cout<<"     |     |     \n";
}
//turn
void Turn(){
    choice_again:
    if(turn=='X'){
        cout<<"\nPlayer1 [X] enter any number: ";
    }
    if(turn =='O'){
        cout<<"\nPlayer2 [O] enter any number: ";
    }
    cin>>choice;
    switch (choice){
        case 1: 
            row=0; col=0; break;
        case 2: 
            row=0; col=1; break;
        case 3: 
            row=0; col=2; break;
        case 4: 
            row=1; col=0; break;
        case 5: 
            row=1; col=1; break;
        case 6: 
            row=1; col=2; break;
        case 7: 
            row=2; col=0; break;
        case 8: 
            row=2; col=1; break;
        case 9: 
            row=2; col=2; break;
        default:
            cout<<"\nInvalid Input\n";
            goto choice_again;
    }
    if(turn=='X' && number[row][col]!='X' && number[row][col]!='O'){
        number[row][col]='X';
        turn='O';
    }
    else if(turn=='O' && number[row][col]!='X' && number[row][col]!='O'){
        number[row][col]='O';
        turn='X';
    }
    else{
        cout<<"\nThis place is occupied try again\n";
        goto choice_again;
    }
}

//game condtion
bool gameover(){
    //win
    for(int i=0; i<3; i++){
        if((number[i][0]==number[i][1] && number[i][0]==number[i][2])||(number[0][i]==number[1][i] && number[0][i]==number[2][i])){
            return false;
        }
        if((number[0][0]==number[1][1] && number[0][0]==number[2][2])||(number[0][2]==number[1][1] && number[0][2]==number[2][0])){
            return false;
        }
    }
    //game is playing
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(number[i][j]!='X' && number[i][j]!='O'){
                return true;
            }
        }
    }

    //draw
    draw = true;
    return false;

}
//main
main(){
    while(gameover()){
        display_table();
        Turn();
        display_table();
    }

    if(turn =='X' && draw== false){
        cout<<"\nCongratulation player2 [O] win the watch";
    }
    else if(turn =='O' && draw== false){
        cout<<"\nCongratulation player1 [X] win the watch";
    }
    else{
        cout<<"\nGame draw";
    }
}
