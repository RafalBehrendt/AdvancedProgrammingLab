#include "TrivialOptimizer.h"

TrivialOptimizer::getBestScore() {
	return 0;
}

TrivialOptimizer::solveProblem(Problem * problem) {
	int size = problem->getSize();
	double sol = new double[size]
	for(int i = 0; i < size; i++){
		sol[i] = i % n;
	}
}