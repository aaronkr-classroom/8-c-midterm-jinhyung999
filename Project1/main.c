//main.c
#include <stdio.h>
#include "grade_funcs.h"

#define SIZE 10

int main() {
	int scores[SIZE] = { 85, 70, 55, 90, 45, 60, 78, 88, 92, 49 };
	float average;
	int min, max;
	int pass_count, fail_count;

	calculate_average(scores, SIZE, &average);
	printf("Average grade: %.1f\n", average);

	find_min_max(scores, SIZE, &min, &max);
	printf("Highest grade: %d\n", max);
	printf("Lowest grade: %d\n\n", min);

	printf("Grades above average: ");
	for (int i = 0; i < SIZE; i++) {
		if (scores[i] > average) {
			printf("%d ", scores[i]);
		}
	}
	printf("\n");
	printf("Grades below average: ");
	for (int i = 0; i < SIZE; i++) {
		if (scores[i] < average) {
			printf("%d ", scores[i]);
		}
	}
	printf("\n\n");

	count_pass_fail(scores, SIZE, &pass_count, &fail_count);
	printf("Number of students passing: %d\n", pass_count);
	printf("Number of students failing: %d", fail_count);
}