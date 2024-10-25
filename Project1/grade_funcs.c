#include "grade_funcs.h"

void calculate_average(int scores[], int size, float *average) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += scores[i];
	}
	*average = sum / (float)size;
}
void find_min_max(int scores[], int size, int *min, int *max) {
	*min = scores[0];
	*max = scores[0];
	for (int i = 1; i < size; i++) {
		if (scores[i] < *min) {
			*min = scores[i];
		}
		if (scores[i] > *max) {
			*max = scores[i];
		}
	}
}
void count_pass_fail(int scores[], int size, int *pass_count, int *fail_count) {
	*pass_count = 0;
	*fail_count = 0;
	for (int i = 0; i < size; i++) {
		if (scores[i] >= 60) {
			(*pass_count)++;
		}else{
			(*fail_count)++;
		}
	}
}
