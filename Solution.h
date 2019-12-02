#ifndef SOLUTION_H
#define SOLUTION_H
#include <vector>
#include"Problem.h"

using namespace std;


class Solution
{
    public:

        Solution (const Problem& pbm);
		Solution (const Solution& sol);
		~Solution();

		const Problem& pbm() const;

		void initialize();
		double fitness();
		double get_fitness();

		vector<double>& get_solution();

		double& get_position_in_solution(const int index);
        void  set_position_in_solution(const int index, const double value);

    private:
        vector<double> _solution;
        double _fitness_current;
		const Problem& _pbm;
};

#endif // SOLUTION_H
