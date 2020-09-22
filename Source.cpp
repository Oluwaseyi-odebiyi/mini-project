#include <iostream>
#include "math.h"
using namespace std;

class quadraticEquation
{
public:
	void QuadraticFormula(int a, int b, int c)
	{
		int squareB = pow(b, 2);
		int ac = 4 * a * c;
		int difference = squareB - ac;
		int sqDifference = sqrt(difference);
		int denimerator = 2 * a;
		double firstPartOfRoot = (-b) / denimerator;

		if (difference > 0)
		{
			int positiveNumerator = -(b - sqDifference);
			int negativeNumerator = -(b + sqDifference);
			double root = positiveNumerator / denimerator; double root2 = negativeNumerator / denimerator;
			cout << "The root of the quadratic equation are " << endl;
			cout << " "<< root << " and " << root2 << endl;
		}
		else if (difference < 0)
		{
			double imaginaryPath = sqrt(-difference) / denimerator;
			cout << "The root of the quadratic equation are 3" << endl;
			cout << " "<< firstPartOfRoot << " + " << imaginaryPath << "i" << " and " << firstPartOfRoot << " - " << imaginaryPath << "i";
		}
		else if (difference == 0)
		{
			cout << "The root of the equation is" << endl;
			cout << " "<<firstPartOfRoot;
		}
	}
};

int main() 
{
	int a, b, c;
	quadraticEquation myobj;
	cout << "Enter the coeficient of a in the quadratic equation \n";
	cin >> a;
	cout << "Enter the coeficient of b in the quadratic equation \n";
	cin >> b;
	cout << "Enter the coeficient of c in the quadratic equation \n";
	cin >> c;
	myobj.QuadraticFormula(a, b, c);
}
