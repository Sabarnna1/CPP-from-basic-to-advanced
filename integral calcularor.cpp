#include <iostream>

#include "src/CosineFunction.h"
#include "src/SineFunction.h"

#include "src/TrapezoidalRule.h"
#include "src/SimpsonRule.h"
#include "src/RombergMethod.h"
using namespace std;

const double ACCURACY = 1e-4;

const double STEP_SIZE = 1e-4;

int main() {

	double a = 0, b = 0.1;

	std::cout << endl << "COSINE" << endl << endl;

	CosineFunction cosine;

	for (int i = 0; i < 10; i++) {
		cout << "a = 0" << endl<< "b = " << b << endl;

		TrapezoidalRule trapezoidalRule(STEP_SIZE);
		SimpsonRule simpsonRule(STEP_SIZE);
		RombergMethod rombergMethod(ACCURACY);

		cout << "Trapezoidal Rule == ";
		cout << trapezoidalRule.calculate(cosine, a, b) << endl;
		cout << "Simpson's Rule   == ";
		cout << simpsonRule.calculate(cosine, a, b) << endl;
		cout << "Romberg's Method == ";
		cout << rombergMethod.calculate(cosine, a, b) << endl;

		cout << endl;
		b += 0.1;
	}

	b = 0.1;

	cout << endl << "SINE" << endl << endl;

	SineFunction sine;

	for (int i = 0; i < 10; i++, b += 0.1) {
		cout << "a = 0" << endl;
		cout << "b = " << b << endl;

		TrapezoidalRule trapezoidalRule(STEP_SIZE);
		SimpsonRule simpsonRule(STEP_SIZE);
		RombergMethod rombergMethod(ACCURACY);

		cout << "Trapezoidal Rule == "<<trapezoidalRule.calculate(sine, a, b) << endl;
		cout << "Simpson's Rule   == "<< simpsonRule.calculate(sine, a, b) << endl;
		cout << "Romberg's Method == "<< rombergMethod.calculate(sine, a, b) << endl;
		cout << endl;
	}

	return 0;

}
