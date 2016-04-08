#include "Card.h"

int Card::counter = 0;

Card::Card()
{
	figure = counter % 13;
	colour = counter / 13;
	counter++;
}

result Card::compare(Card *)
{
	
}

string Card::description()
{
	static char colours[] = "KPTR";
	static char figures[] = "234567890JQKA";
	return string(1, colours[colour]) + string(1, figures[figure]);
}