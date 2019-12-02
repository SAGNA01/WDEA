#include "SetupParams.h"

SetUpParams::SetUpParams(unsigned int runs, unsigned int steps, unsigned int pop_size, unsigned int sol_size) :
                         _independent_runs{runs}, _nb_evolution_steps{steps},
                         _population_size{pop_size}, _solution_size{sol_size}
{}

SetUpParams::~SetUpParams()
{}
