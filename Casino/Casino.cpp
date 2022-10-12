// cassino 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void rules();
void sign();

int main()
{
    int amount;// Amount the player will have 
    int betAmount; // Amount the player is willing to bet
    int betAmount2;// second bet mount
    string playerName;
    int numBet; // Numbers to guess
    int numGuess; // Numbers guessed
    int numGuess2; // second number guesses
    int dice;
    int dice2;
    char choice;

    sign();
    cout << "Who is playing? \n";
    cin >> playerName;
    cout << "How many numbers to bet money on? (up to 2 numbers) ";
    cin >> numBet;
    if (numBet == 1) {
        cout << "\n\nEnter Deposit amount to play game : $";
        cin >> amount;
        do
        {
            rules();
            cout << "\n\nYour current balance is $ " << amount << "\n";

            // Get player's betting amount
            do
            {
                cout << playerName << ", enter money to bet : $";
                cin >> betAmount;
                if (betAmount > amount)
                    cout << "Your betting amount is more than your current balance\n"
                    << "\nRe-enter your beting Amount\n ";
            } while (betAmount > amount);

            // Get player's numbers
            do
            {
                cout << "Guess your number to bet between 1 to 10 :";
                cin >> numGuess;
                if (numGuess <= 0 || numGuess > 10)
                    cout << "Please check the number(s)! should be between 1 to 10\n"
                    << "\nRe-enter number(s)\n ";
            } while (numGuess <= 0 || numGuess > 10);

            dice = rand() % 10 + 1; // Will hold the randomly generated integer between 1 and 10

            if (dice == numGuess)
            {
                cout << "\n\nCongratulation,  you won! " << betAmount;
                amount += betAmount * 2;
            }
            else
            {
                cout << "Sorry you lost $ " << betAmount << "\n";
                amount -= betAmount;
            }

            cout << "\nThe winning number was : " << dice << "\n";
            cout << "\n" << playerName << ", You currently have $ " << amount << "\n";
            if (amount == 0)
            {
                cout << "You have no more money to play ";
                break;
            }
            cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choice;
        } while (choice == 'Y' || choice == 'y');

        cout << "\n\n\n";
        cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n";

    }

    /////////////////////////////////////////////////////////////////////////////////////////
    else if (numBet == 2) {
        cout << "\n\nEnter Deposit amount to play game : $";
        cin >> amount;

        do
        {
            rules();
            cout << "\n\nYour current balance is $ " << amount << "\n";

            // Get player's betting amount
            do
            {
                cout << playerName << ", enter first money to bet : $";
                cin >> betAmount;
                cout << playerName << ", enter second money to bet: $";
                cin >> betAmount2;
                if (betAmount > amount && betAmount2 > amount)
                    cout << "Your betting amount is more than your current balance\n"
                    << "\nRe-enter your beting Amount\n ";
            } while (betAmount > amount && betAmount2 > amount);

            // Get player's numbers
            do
            {
                cout << "Guess your first number to bet between 1 to 10 : ";
                cin >> numGuess;
                cout << "Guess your second number to bet between 1 to 10 not including first number entered: ";
                cin >> numGuess2;
                if (numGuess <= 0 || numGuess > 10 || numGuess2 <= 0 || numGuess2 > 10) 
                    cout << "Please check the number(s)! should be between 1 to 10\n"
                    << "\nRe-enter number(s)\n ";

            } while (numGuess <= 0 || numGuess > 10 || numGuess2 <= 0 || numGuess2 > 10);

            dice = rand() % 10 + 1;// Will hold the randomly generated integer between 1 and 10
            dice2 = rand() % 10 - numGuess;

            if (dice == numGuess && dice2 == numGuess2)
            {
                cout << "\n\nCongratulation,  you won! " << betAmount + betAmount2;
                amount += (betAmount + betAmount2) * 2;
            }
            else if (dice == numGuess && dice2 != numGuess2)
            {
                cout << "You won one of the the bet and you get  $ " << betAmount << "\n";
                amount += (betAmount - betAmount2);
            }
            else if (dice != numGuess && dice2 == numGuess2)
            {
                cout << "You won one of the bet and you get  $ " << betAmount2 << "\n";
                amount += (betAmount2 - betAmount);
            }
            else
            {
                cout << "Sorry you lost  $ " << betAmount + betAmount2 << "\n";
                amount -= (betAmount +betAmount2);
            }

            cout << "\nThe winning numbers were : " << dice << "and"  << dice2 << "\n";
            cout << "\n" << playerName << ", You currently have $ " << amount << "\n";
            if (amount == 0)
            {
                cout << "You have no more money to play ";
                break;
            }
            cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choice;
        } while (choice == 'Y' || choice == 'y');

        cout << "\n\n\n";
        cout << "\n\nThanks for playing casino game. Your balance amount is $ " << amount << "\n\n";

    }
    

    return 0;
}

// Game Rules
    void rules()
    {

	    cout << "************************************************************************************************\n";
	    cout << "Here Are The Rules Of The Game\n";
	    cout << "Decide to guess 1 or 2 numbers\n";
	    cout << "Choose numbers between 1 to 10\n";
	    cout << "Bet money on Chosen number(s)\n";
	    cout << "If you guessed right, you double your money on number(s) guessed\n";
	    cout << "If guessed wrong, you will loose your monet bet\n";
	    cout << "************************************************************************************************\n";
	    cout << "";
	    cout << "";
    }

    void sign() {
	    cout << "\n===================================================================================================";
	    cout << "\n        CCCCC      A        SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO         ";
	    cout << "\n      CC          A  A      SS             III     NN N   NN   OO      OO        ";
	    cout << "\n     CC          A    A     SSSSSSSSS      III     NN  N  NN   OO      OO        ";
	    cout << "\n      CC        AAAAAAAA           SS      III     NN   N NN   OO      OO        ";
	    cout << "\n        CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO         ";
        cout <<"\n";

        cout << "\n===               COME AND WIN TO SO THAT YOUR LIVE CAN CHANGE                 ===\n";

        cout << "\n       kk   kk    OOOOOOOO    uu     uu         A          OOOOOOOO         ";
        cout << "\n       kk kk     OO      OO   uu     uu        A  A       OO      OO        ";
        cout << "\n       kkk       OO      OO   uu     uu       A    A      OO      OO        ";
        cout << "\n       kk kk     OO      OO   uu     uu      AAAAAAAA     OO      OO        ";
        cout << "\n       kk   kk    OOOOOOOO    uuuuuuuuu     A        A     OOOOOOOO         ";
        cout << "\n====================================================================================================\n";
	    cout << "";
    }
