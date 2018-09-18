//File Name: shufflecards.cpp
//Author: Patricia Shatz
//Assignment Number 12
//Description: Create a program that has a user choose a card among 21 cards, shuffles the cards three times
//then divides up the cards into three stacks of seven cards, and whatever card was picked by the user
//will always end up in the 11th position of the deck of cards


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//function that shuffles the deck 3 times, every time the program is run
void shuffle(int deck[], int card, int size);
//function that prints out the deck's card values every time it is shuffled
void printdeck(int deck[], int size); 

int main()
{

	int deck [21];
	int temp;
	int i;


	//this for loop is going through the 21 cards and is assigning a card number to each index
	//of the array deck[21]
	for(i = 0; i < 21; i++)
	{
		deck[i] = i + 1;
	}


	cout << "Pick a card between 1 and 21:" << endl;

	//Here the user enters the card they picked from the deck and the value is stored in a variable named "temp"
	cin >> temp;

	//calling shuffle() and printdeck() functions three times each 
	shuffle(deck, temp, 21);
	printdeck(deck, 21);

	shuffle(deck, temp, 21);
	printdeck(deck, 21);

	shuffle(deck, temp, 21);
	printdeck(deck, 21);

	cout << "This is the card number the user picked: card " << temp << endl;

}


void shuffle(int deck[], int card, int size)
{
	//this for loop has the index i start from the end of the deck, i.e., from index 20, 
	//and works its way to the beginning of the deck, i.e., to index 0
	for(int i = size - 1; i > 0; i--)
	{ 
			int temp2 = rand() % i;

			int temp3 = deck[i];
	
			//Here, I am swapping two elements in the array deck[21]
			deck[i] = deck[temp2]; 

			deck[temp2] = temp3 ; 
	} 
	
	int i;

	for (i = 0; i < 21; ++i)
	{
	  	
		if(deck[i] == card)
		{
			break;

		}

	}

	//Here I am once again swapping two values in the array deck; 
	//I am assiging the number of the card at the 11th position to a new variable named "temp4"
	int temp4 = deck[10];

	//Here, I am assigning the variable named "card" to the number of the card 
	//at the 11th position of the array
	deck[10] = card;

	//Here I am assigning the variable named "temp4" to the card picked by the user,
	//i.e., deck[i] 
	deck[i] = temp4;

}


//this function prints out the values of the deck each time it is shuffled
void printdeck(int deck[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << i << ": " << deck[i] << endl;

	}
	cout << endl;

}







