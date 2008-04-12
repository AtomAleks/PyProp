#ifndef COMBINEDREPRESENTATION_H
#define COMBINEDREPRESENTATION_H

#include "../wavefunction.h"
#include "representation.h"

#include <boost/shared_ptr.hpp>

typedef Representation<1>::Ptr Representation1DPtr;

template<int Rank>
class CombinedRepresentation : public Representation<Rank>
{
public:
	typedef blitz::Array<cplx, Rank> DataArray;

private:
	//Variables
	blitz::TinyVector<Representation1DPtr, Rank> Representations;

	cplx InnerProductImpl_Algo1(DataArray d1, DataArray d2);
	cplx InnerProductImpl_Algo2(DataArray d1, DataArray d2);

public:
	typedef shared_ptr< CombinedRepresentation<Rank> > Ptr;

	int Algorithm;

	//Constructors
	CombinedRepresentation();
	virtual ~CombinedRepresentation();
	
	virtual typename Representation<Rank>::RepresentationPtr Copy();

	//Get/Set the representation of the specified rank
	Representation1DPtr GetRepresentation(int rank);
	void SetRepresentation(int rank, Representation1DPtr repr);
	
	//Multiply wavefunction by overlap matrix
	void MultiplyOverlapMatrix(Wavefunction<Rank> &srcPsi, Wavefunction<Rank> &dstPsi, int rank);

	//Implementation of the representation interface.
	virtual blitz::TinyVector<int, Rank> GetFullShape();
	virtual cplx InnerProduct(const Wavefunction<Rank> &w1, const Wavefunction<Rank> &w2);
	virtual blitz::Array<double, 1> GetGlobalGrid(int rank);
	virtual blitz::Array<double, 1> GetLocalWeights(int rank);
	virtual blitz::Array<double, 2> GetGlobalOverlapMatrixFullRow(int rank);
	virtual blitz::Array<double, 2> GetGlobalOverlapMatrixFullCol(int rank);
	virtual blitz::Array<cplx, 2> GetGlobalOverlapMatrixBlas(int rank);
	virtual int GetOverlapBandwidth(int rank);
	virtual void ApplyConfigSection(const ConfigSection &config);

};

#endif

