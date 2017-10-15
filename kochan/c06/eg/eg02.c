/* Chapter 06 Example 02 Program to calculate the average of a set of grades and count
 * the number of failing grades
 * Vasanth 15 October 2017
 */

#include <stdio.h>

int main (void)
{
	int num_grades;
	int i;
	int grade;
	int grade_total;
	int fail_count;
	float avg;

	grade_total = 0;
	fail_count = 0;

	printf("how many grades will you be entering> ");
	scanf("%i", &num_grades);
	printf("entered number of grades %i\n", num_grades);

	for (i = 1; i <= num_grades; ++i) {
		printf("enter grade %i:  ", i);
		scanf("%i", &grade);
		printf("entered grade is %i\n\n", grade);

		grade_total = grade_total + grade;

		if (grade < 65) {
			++fail_count;
		}
	}
	avg = (float) grade_total / num_grades;

	printf("grade average = %.2f\n", avg);
	printf("number of failures = %i\n", fail_count);

	return 0;
}
