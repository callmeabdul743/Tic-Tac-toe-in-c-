#include <iostream>
using namespace std;
char number[3][3]={{'1','2','3'}, {'4','5','6'}, {'7', '8', '9'}};

void display_table(){
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
main(){
    display_table();
}
