#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "definition_and_pronunciation.h"
int main(int argc, char  *argv[])
{
	char* word;
	word = argv[1];
	display_definition(word);
	play_audio();
	return 0;
}
