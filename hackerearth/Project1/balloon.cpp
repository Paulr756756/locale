#include <iostream>

int status(int, int, int, double*);

int main(void) {
	int test_cases = 0, grn = 0, prpl=0, num=0, curr=0;
	double* cost = 0;
	std::cin >> test_cases;
	for (int counter = 0; counter < test_cases; counter++) {
		std::cin >> grn >> prpl >> num;
		status(grn, prpl, num, cost);

		
	}
}

int status (int grn, int prpl, int num, double* cost){
	int temp = 0;
	for (int counter = 0; counter < num; counter++) {
		for (int index = 0; index < 2; index++) {
			std::cin >> temp;
			if (temp)
				cost += grn;

		}
	}
	return EXIT_SUCCESS;
}