#include "Problem.h"

Problem::Problem()
{
    //ctor
}

Problem::Problem(int dimension, double LowerB, double UpperB): _dimension{dimension}, LowerBound {LowerB}, UpperBound {UpperB}{}

Problem::~Problem()
{
    //dtor
}

int Problem::Dimension() const
{
	return _dimension;
}
