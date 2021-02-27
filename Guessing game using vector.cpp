#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;  //using directive 


void print_vector(vector <int> vector)
{
	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << "\t";
	}
	cout << "\n";
}

void play_game()
{
	vector <int> guesses;
	
	int random = rand() % 251;
	cout << random << endl;
	cout << "Guess the number: ";
	while (true)
	{
		int guess;
		cin >> guess;
		guesses.push_back(guess);
		if (guess == random)
		{
			cout << "you win!\n";
			break;
		}
		else if (guess < random)
		{
			cout << "Lower than actual number\n";
			
		}
		else(guess > random);
		{
			cout << "Higher than Actual Number\n"<< endl;
		}

	}

	print_vector(guesses);

}

int main()
{
	srand(time(NULL));
	int choice;
	do{
		std::cout << "0. Quit" <<std:: endl << "1. Play Game\n";
	std::cin >> choice;
	switch (choice)
	{
	case 0:
			cout << "Thanks for nothing\n";
			return 0;
	
	case 1:
				play_game();

				break;
	   }
	}
	while (choice != 0);
}
