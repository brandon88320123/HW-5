#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 12

int main()
{
	int face, face2, face_total, roll1, roll_results[36000], frequency[SIZE] = { 0 };

	srand(time(NULL));

	for (roll1 = 1; roll1 <= 36000; roll1++)
	{
		face = rand() % 6 + 1;
		face2 = rand() % 6 + 1;
		face_total = face + face2;
		roll_results[roll1 - 1] = face_total;
	}

	for (face = 1; face <= 36000; face++)
	{
		
	}

	printf("%s%17s\n", "Total", "Frequency");

	for (face = 1; face <= SIZE; face++)
		printf("%4d%17d\n", face, frequency[face]);


	system("PAUSE");
	return 0;
}