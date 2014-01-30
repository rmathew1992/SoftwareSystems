/* A refactored version of the card counter found in 
Head First C. 

Rachel Mathew*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	game();
	return 0;
}

/* Begins a game, a user is prompted to enter a card name
after each turn the count for the game is displayed
*/
int game(){
		char card_name[3];
		int count = 0;
	while (card_name[0] != 'X'){
		puts("Enter the card_name: ");
		scanf("%2s", card_name);
		int value = get_value(card_name);
		count = counter(value,count);
		printf("Current count: %i\n", count);
	}
}

/* Calculates the value of the card, displays an error
 message if the value doesn't make sense. Takes in the card
 name */
int get_value(char card[]){
	int val = 0;
	int temp = 0;
	switch(card[0]){
	case 'K':
	case 'Q':
	case 'J':
		val = 10;
		break;
	case 'A':
		val = 11;
		break;
	case 'X':
		break;
	default:
		temp = atoi(card);
		if ((temp < 1) ||(temp > 10)){
			puts("I don't understand that value!");
			break;	
		} else {
			val = temp;
		}
	}
	return val;
}
/*Keeps track of the score, takes in the value of the current
card and the previous card */ 
int counter(value,count){
	if ((value > 2) && (value < 7)){
			count++;
		} else if (value == 10){
			count--;
		}
	return count;
}