// lab 2

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	
	const int NUMDEF = (rand() % 100) + 1;
	
	int i = 1;
	int userGuess;
	
	do{		
		cout << "Guess a number between 1-100?" <<endl;
		cin >> userGuess;
		
		if(userGuess == NUMDEF)
			cout << "You found the correct number"<<endl;
		else if(userGuess < NUMDEF){
			cout << "too low - try again" <<endl;
			i++;
		} else {
			cout << "too high - try again" <<endl;
			i++;
		}
	}while (userGuess != NUMDEF);
	
	cout << "You guessed " << i << " times"<<endl;
	
	return 0;
}
