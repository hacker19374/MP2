//
// mp2.cpp - Tyler Benedum - 10/22/2026 - Takes inputs of student grades, calculates their average, then outputs the class average.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {

	cout << "Student #1:\nEnter homework average: ";

	// Defining all of the variables used.

	double hw;
	double lab;
	double quiz;
	double m1;
	double m2;
	double final;

	double totalGrade = 0;

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int f = 0;

	int students = 1;

	// Set presision of the output.

	cout << fixed << setprecision(1);
	
	while (cin >> hw) {
		// Final output when user inputs -1
		if (hw < 0) {
			cout << "OVERALL AVERAGE: " << totalGrade / students << endl;

			cout << "A's: " << a << endl;
			cout << "B's: " << b << endl;
			cout << "C's: " << c << endl;
			cout << "D's: " << d << endl;
			cout << "F's: " << f << endl;

			break;
		}

		// Input each of the scores here
		cout << "Enter lab average: ";
		cin >> lab;

		cout << "Enter quiz average: ";
		cin >> quiz;

		cout << "Enter Midterm 1 score: ";
		cin >> m1;

		cout << "Enter Midterm 2 score: ";
		cin >> m2;

		cout << "Enter final exam score: ";
		cin >> final;
		
		// Calculate the student's average
		double avg = (hw * 0.15) + (lab * 0.25) + (quiz * 0.1) + (m1 * 0.125) + (m2 * 0.125) + (final * 0.25);

		cout << "Course average: " << avg << endl;

		// Assign and output the letter grade
		if (avg >= 90) {
			cout << "Letter grade: A" << endl;
			a++;
		}
		else if (avg >= 80) {
			cout << "Letter grade: B" << endl;
			b++;
		}
		else if (avg >= 70) {
			cout << "Letter grade: C" << endl;
			c++;
		}
		else if (avg >= 60) {
			cout << "Letter grade: D" << endl;
			d++;
		}
		else {
			cout << "Letter grade: F" << endl;
			f++;
		}

		// Add one student to the count and add the score to the total sum of score.
		totalGrade += avg;

		students++;

		cout << "\n\nStudent #" << students << ":\nEnter homework average: ";
	}
}
