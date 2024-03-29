#ifndef SETUPPARAMS_H
#define SETUPPARAMS_H


class SetUpParams
{
    public:
        SetUpParams(unsigned int runs, unsigned int steps, unsigned int pop_size, unsigned int sol_size);
        ~SetUpParams();
        const unsigned int   independent_runs() const;
		const unsigned int   nb_evolution_steps() const;
		const unsigned int   population_size() const;
		const unsigned int   solution_size() const;
		void independent_runs(const unsigned int val);
		void nb_evolution_steps(const unsigned int val);
		void population_size(const unsigned int val);
		void solution_size(const unsigned int val);

    private:
        unsigned int   _independent_runs;         //number of independent runs
		unsigned int   _nb_evolution_steps;       // number of iterations per run
		unsigned int   _population_size;		// number of solutions in the population
		unsigned int   _solution_size;	        // size of each particle

};

#endif // SETUPPARAMS_H
