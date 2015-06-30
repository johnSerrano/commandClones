#include <stdio.h>

//using namespace std;

int main(int argc, char **argv)
{
	int i;
	if (argc < 2) return 1;
	for (i = 1; i<argc; i++){
		printf("%s ", argv[i]);
	}
	printf("\n");
	return 0;
}