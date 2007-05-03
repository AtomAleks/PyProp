#ifndef COMBINEDREPRESENTATION_H
#define COMBINEDREPRESENTATION_H

#include "../wavefunction.h"
#include "representation.h"

#include <boost/shared_ptr.hpp>

typedef boost::shared_ptr< Representation<1> > Representation1DPtr;

template<int Rank>
class CombinedRepresentation : public Representation<Rank>
{
private:
	//Variables
	Representation1DPtr Representations[Rank];
	blitz::Array<double, 1> LocalGrid[Rank];

public:
	//Constructors
	CombinedRepresentation() {}
	virtual ~CombinedRepresentation() {}

	//Get/Set the representation of the specified rank
	Representation1DPtr GetRepresentation(int rank);
	void SetRepresentation(int rank, Representation1DPtr repr);
	
	//Implementation of the representation interface.
	virtual blitz::TinyVector<int, Rank> GetFullShape();
	virtual cplx InnerProduct(const Wavefunction<Rank> &w1, const Wavefunction<Rank> &w2);
	virtual blitz::Array<double, 1> GetGlobalGrid(int rank);
	virtual blitz::Array<double, 1> GetLocalWeights(int rank);
	virtual void ApplyConfigSection(const ConfigSection &config);
};

#endif

