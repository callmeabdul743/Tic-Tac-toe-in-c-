#include <iostream>
using namespace std;
char number[3][3]={{'1','2','3'}, {'4','5','6'}, {'7', '8', '9'}};
int row, col;
int choice;
char turn='X';
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
    if(turn=='X'){
        number[row][col]='X';
        turn='O';
    }
    else if(turn=='O'){
        number[row][col]='O';
        turn='X';
    }
}
//main
main(){
    while(true){
        display_table();
        Turn();
    }
}
