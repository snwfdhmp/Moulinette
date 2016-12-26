#include <stdio.h>
/*
	Nom : pour l'instant non nommé
	Principe : Note le code source situé au path donné en paramètre
				par rapport à plusieurs critères qualitatifs
	


*/

double getCommentRatio(FILE* source) {
	unsigned long long int raw, comment;
	unsigned short int state = 0;
	char c = 32; // "32" => " "
	while(c != EOF) {
		c=fgetc(source);
		if(state<2) {
			if (c=='/')
				state++;
			else
				state=0;
		}
		if (state==1) {
			if (c=='*')
				state++;
			else
				state=0;
		}
		
	}
}

int main(int argc, char const *argv[])
{
	const char AppName[] = "Moulinette";
	if(argc != 2) {
		printf("Usage : %s pathToFile", AppName);
		return 1;
	}
	FILE* source;
	source = fopen(argv[2], "a");
	return 0;
}