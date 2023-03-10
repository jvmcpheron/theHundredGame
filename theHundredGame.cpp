/* 
Programming Project 3: The 100 Game
Jane McPheron
02/16/2023
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


//functions


void gamePlay() {

    //declaring varables
    string playAgain;
    string playerFirst;
    int totalNumber;
    int random;
    int playerChoice;
    bool okNum;
    int tempSum;

    totalNumber = 0;

    cout << "Would you like to go first?(y/n)";
    cin >> playerFirst;

    //checking if player wants to go first
    if (playerFirst == "y"){
        okNum = false;
        //player's turn
        while (okNum != true){
            cout << "Pick a number 1-10: ";
            cin >> playerChoice;

            //checks for valid entry
            if (playerChoice > 0){
                if (playerChoice < 11){
                    okNum = true;
                } else{
                    okNum = false;
                    cout << "Not a valid number!" << endl;
                }   
            } else{
                okNum = false;
                cout << "Not a valid number!" << endl;
            }
        }
        totalNumber += playerChoice;
        cout << "The current total is: " << totalNumber << endl;
    }



    //game loop
    while (totalNumber < 100) {


        //conditional checking if computer can win
        if (totalNumber < 90){
            //generate random number
	        srand((unsigned) time(NULL));
	        random = 1 + rand()%10;
	
        } else{
            //code for winning number
            random = 100 - totalNumber;
        }

        cout<< "The computer chose: " << random <<endl;
        totalNumber += random;
        cout << "The current total is: " << totalNumber << endl;

        //conditional checking if comp already won
        if (totalNumber < 100){
            okNum = false;
            //player's turn
            while (okNum != true){
                cout << "Pick a number 1-10: ";
                cin >> playerChoice;
                tempSum = playerChoice + totalNumber;

                //checks for valid entry
                if (playerChoice > 0){
                    if (playerChoice < 11){
                        if (tempSum < 101){
                            okNum = true;
                        }else {
                            okNum = false;
                            cout << "Not a valid number!" << endl;
                        }    
                    } else{
                        okNum = false;
                        cout << "Not a valid number!" << endl;
                    }   
                } else{
                    okNum = false;
                    cout << "Not a valid number!" << endl;
                }
            }
            totalNumber += playerChoice;
            cout << "The current total is: " << totalNumber << endl;

            //checking if you win
            if (totalNumber == 100){
                cout << "You win!!!" << endl;
            } else if (totalNumber > 100){
                cout << "You win!!!" << endl;
            }
        } else {
            cout << "You lost!" << endl;
        }

    }

    //checking if user wants to play again
    cout << "Would you like to play again? (y/n)";
    cin >> playAgain;
    if (playAgain == "y"){
        gamePlay();
    }

}

int main(){

    gamePlay();
    cout << "Thanks for playing!" << endl;

}

