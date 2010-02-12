
// Boost Includes ==============================================================
#include <boost/python.hpp>
#include <boost/cstdint.hpp>

// Includes ====================================================================
#include <representation/cartesianrange.h>
#include <representation/cartesianrepresentation.h>

// Using =======================================================================
using namespace boost::python;

// Declarations ================================================================
namespace  {

void (CartesianRepresentation<1>::*CartesianRepresentation_1___MultiplyIntegrationWeightsWavefunction_1___Wavefunction_1___int)(Wavefunction<1>&, Wavefunction<1>&, int)  = &CartesianRepresentation<1>::MultiplyIntegrationWeights;

void (CartesianRepresentation<1>::*CartesianRepresentation_1___MultiplyIntegrationWeightsWavefunction_1___Wavefunction_1__)(Wavefunction<1>&, Wavefunction<1>&)  = &CartesianRepresentation<1>::MultiplyIntegrationWeights;

void (CartesianRepresentation<1>::*CartesianRepresentation_1___MultiplyIntegrationWeightsWavefunction_1___int)(Wavefunction<1>&, int)  = &CartesianRepresentation<1>::MultiplyIntegrationWeights;

void (CartesianRepresentation<1>::*CartesianRepresentation_1___MultiplyIntegrationWeightsWavefunction_1__)(Wavefunction<1>&)  = &CartesianRepresentation<1>::MultiplyIntegrationWeights;

void (CartesianRepresentation<1>::*CartesianRepresentation_1___MultiplyOverlapWavefunction_1___Wavefunction_1___int)(Wavefunction<1>&, Wavefunction<1>&, int)  = &CartesianRepresentation<1>::MultiplyOverlap;

void (CartesianRepresentation<1>::*CartesianRepresentation_1___MultiplyOverlapWavefunction_1__)(Wavefunction<1>&)  = &CartesianRepresentation<1>::MultiplyOverlap;

void (Representation<1>::*Representation_1___MultiplyOverlapstd__complex_double__Wavefunction_1___std__complex_double__Wavefunction_1___int)(std::complex<double>, Wavefunction<1>&, std::complex<double>, Wavefunction<1>&, int)  = &Representation<1>::MultiplyOverlap;

void (CartesianRepresentation<2>::*CartesianRepresentation_2___MultiplyIntegrationWeightsWavefunction_2___Wavefunction_2___int)(Wavefunction<2>&, Wavefunction<2>&, int)  = &CartesianRepresentation<2>::MultiplyIntegrationWeights;

void (CartesianRepresentation<2>::*CartesianRepresentation_2___MultiplyIntegrationWeightsWavefunction_2___Wavefunction_2__)(Wavefunction<2>&, Wavefunction<2>&)  = &CartesianRepresentation<2>::MultiplyIntegrationWeights;

void (CartesianRepresentation<2>::*CartesianRepresentation_2___MultiplyIntegrationWeightsWavefunction_2___int)(Wavefunction<2>&, int)  = &CartesianRepresentation<2>::MultiplyIntegrationWeights;

void (CartesianRepresentation<2>::*CartesianRepresentation_2___MultiplyIntegrationWeightsWavefunction_2__)(Wavefunction<2>&)  = &CartesianRepresentation<2>::MultiplyIntegrationWeights;

void (CartesianRepresentation<2>::*CartesianRepresentation_2___MultiplyOverlapWavefunction_2___Wavefunction_2___int)(Wavefunction<2>&, Wavefunction<2>&, int)  = &CartesianRepresentation<2>::MultiplyOverlap;

void (CartesianRepresentation<2>::*CartesianRepresentation_2___MultiplyOverlapWavefunction_2__)(Wavefunction<2>&)  = &CartesianRepresentation<2>::MultiplyOverlap;

void (Representation<2>::*Representation_2___MultiplyOverlapstd__complex_double__Wavefunction_2___std__complex_double__Wavefunction_2___int)(std::complex<double>, Wavefunction<2>&, std::complex<double>, Wavefunction<2>&, int)  = &Representation<2>::MultiplyOverlap;

void (CartesianRepresentation<3>::*CartesianRepresentation_3___MultiplyIntegrationWeightsWavefunction_3___Wavefunction_3___int)(Wavefunction<3>&, Wavefunction<3>&, int)  = &CartesianRepresentation<3>::MultiplyIntegrationWeights;

void (CartesianRepresentation<3>::*CartesianRepresentation_3___MultiplyIntegrationWeightsWavefunction_3___Wavefunction_3__)(Wavefunction<3>&, Wavefunction<3>&)  = &CartesianRepresentation<3>::MultiplyIntegrationWeights;

void (CartesianRepresentation<3>::*CartesianRepresentation_3___MultiplyIntegrationWeightsWavefunction_3___int)(Wavefunction<3>&, int)  = &CartesianRepresentation<3>::MultiplyIntegrationWeights;

void (CartesianRepresentation<3>::*CartesianRepresentation_3___MultiplyIntegrationWeightsWavefunction_3__)(Wavefunction<3>&)  = &CartesianRepresentation<3>::MultiplyIntegrationWeights;

void (CartesianRepresentation<3>::*CartesianRepresentation_3___MultiplyOverlapWavefunction_3___Wavefunction_3___int)(Wavefunction<3>&, Wavefunction<3>&, int)  = &CartesianRepresentation<3>::MultiplyOverlap;

void (CartesianRepresentation<3>::*CartesianRepresentation_3___MultiplyOverlapWavefunction_3__)(Wavefunction<3>&)  = &CartesianRepresentation<3>::MultiplyOverlap;

void (Representation<3>::*Representation_3___MultiplyOverlapstd__complex_double__Wavefunction_3___std__complex_double__Wavefunction_3___int)(std::complex<double>, Wavefunction<3>&, std::complex<double>, Wavefunction<3>&, int)  = &Representation<3>::MultiplyOverlap;

void (CartesianRepresentation<4>::*CartesianRepresentation_4___MultiplyIntegrationWeightsWavefunction_4___Wavefunction_4___int)(Wavefunction<4>&, Wavefunction<4>&, int)  = &CartesianRepresentation<4>::MultiplyIntegrationWeights;

void (CartesianRepresentation<4>::*CartesianRepresentation_4___MultiplyIntegrationWeightsWavefunction_4___Wavefunction_4__)(Wavefunction<4>&, Wavefunction<4>&)  = &CartesianRepresentation<4>::MultiplyIntegrationWeights;

void (CartesianRepresentation<4>::*CartesianRepresentation_4___MultiplyIntegrationWeightsWavefunction_4___int)(Wavefunction<4>&, int)  = &CartesianRepresentation<4>::MultiplyIntegrationWeights;

void (CartesianRepresentation<4>::*CartesianRepresentation_4___MultiplyIntegrationWeightsWavefunction_4__)(Wavefunction<4>&)  = &CartesianRepresentation<4>::MultiplyIntegrationWeights;

void (CartesianRepresentation<4>::*CartesianRepresentation_4___MultiplyOverlapWavefunction_4___Wavefunction_4___int)(Wavefunction<4>&, Wavefunction<4>&, int)  = &CartesianRepresentation<4>::MultiplyOverlap;

void (CartesianRepresentation<4>::*CartesianRepresentation_4___MultiplyOverlapWavefunction_4__)(Wavefunction<4>&)  = &CartesianRepresentation<4>::MultiplyOverlap;

void (Representation<4>::*Representation_4___MultiplyOverlapstd__complex_double__Wavefunction_4___std__complex_double__Wavefunction_4___int)(std::complex<double>, Wavefunction<4>&, std::complex<double>, Wavefunction<4>&, int)  = &Representation<4>::MultiplyOverlap;


}// namespace 


// Module ======================================================================
void Export_core_modules_discretizations_fourier_pyste_cartesianrange()
{
    scope* CartesianRepresentation_1_scope = new scope(
    class_< CartesianRepresentation<1>, boost::noncopyable >("CartesianRepresentation_1", init<  >())
        .def(init< CartesianRange& >())
        .def(init< blitz::TinyVector<CartesianRange,1>& >())
        .def_readwrite("Range", &CartesianRepresentation<1>::Range)
        .def("Copy", &CartesianRepresentation<1>::Copy)
        .def("GetRange", &CartesianRepresentation<1>::GetRange, return_value_policy< copy_const_reference >())
        .def("GetGlobalGrid", &CartesianRepresentation<1>::GetGlobalGrid)
        .def("GetGlobalWeights", &CartesianRepresentation<1>::GetGlobalWeights)
        .def("GetScalarWeight", &CartesianRepresentation<1>::GetScalarWeight)
        .def("GetFullShape", &CartesianRepresentation<1>::GetFullShape)
        .def("InnerProduct", &CartesianRepresentation<1>::InnerProduct)
        .def("ApplyConfigSection", &CartesianRepresentation<1>::ApplyConfigSection)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_1___MultiplyIntegrationWeightsWavefunction_1___Wavefunction_1___int)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_1___MultiplyIntegrationWeightsWavefunction_1___Wavefunction_1__)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_1___MultiplyIntegrationWeightsWavefunction_1___int)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_1___MultiplyIntegrationWeightsWavefunction_1__)
        .def("MultiplyOverlap", CartesianRepresentation_1___MultiplyOverlapWavefunction_1___Wavefunction_1___int)
        .def("MultiplyOverlap", CartesianRepresentation_1___MultiplyOverlapWavefunction_1__)
        .def("SolveOverlap", &CartesianRepresentation<1>::SolveOverlap)
        .def("MultiplySqrtOverlap", &CartesianRepresentation<1>::MultiplySqrtOverlap)
        .def("SolveSqrtOverlap", &CartesianRepresentation<1>::SolveSqrtOverlap)
        .def("GetGlobalOverlapMatrix", &CartesianRepresentation<1>::GetGlobalOverlapMatrix)
        .def("SetDistributedModel", &Representation<1>::SetDistributedModel)
        .def("GetDistributedModel", &Representation<1>::GetDistributedModel)
        .def("GetInitialShape", &Representation<1>::GetInitialShape)
        .def("GetBaseRank", &Representation<1>::GetBaseRank)
        .def("SetBaseRank", &Representation<1>::SetBaseRank)
        .def("GetId", &Representation<1>::GetId)
        .def("GetLocalGrid", &Representation<1>::GetLocalGrid)
        .def("GetLocalWeights", &Representation<1>::GetLocalWeights)
        .def("MultiplyOverlap", Representation_1___MultiplyOverlapstd__complex_double__Wavefunction_1___std__complex_double__Wavefunction_1___int)
        .def("IsOrthogonalBasis", &Representation<1>::IsOrthogonalBasis)
    );
    register_ptr_to_python< boost::shared_ptr< CartesianRepresentation<1> > >();
    delete CartesianRepresentation_1_scope;

    scope* CartesianRepresentation_2_scope = new scope(
    class_< CartesianRepresentation<2>, boost::noncopyable >("CartesianRepresentation_2", init<  >())
        .def(init< CartesianRange& >())
        .def(init< blitz::TinyVector<CartesianRange,2>& >())
        .def_readwrite("Range", &CartesianRepresentation<2>::Range)
        .def("Copy", &CartesianRepresentation<2>::Copy)
        .def("GetRange", &CartesianRepresentation<2>::GetRange, return_value_policy< copy_const_reference >())
        .def("GetGlobalGrid", &CartesianRepresentation<2>::GetGlobalGrid)
        .def("GetGlobalWeights", &CartesianRepresentation<2>::GetGlobalWeights)
        .def("GetScalarWeight", &CartesianRepresentation<2>::GetScalarWeight)
        .def("GetFullShape", &CartesianRepresentation<2>::GetFullShape)
        .def("InnerProduct", &CartesianRepresentation<2>::InnerProduct)
        .def("ApplyConfigSection", &CartesianRepresentation<2>::ApplyConfigSection)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_2___MultiplyIntegrationWeightsWavefunction_2___Wavefunction_2___int)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_2___MultiplyIntegrationWeightsWavefunction_2___Wavefunction_2__)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_2___MultiplyIntegrationWeightsWavefunction_2___int)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_2___MultiplyIntegrationWeightsWavefunction_2__)
        .def("MultiplyOverlap", CartesianRepresentation_2___MultiplyOverlapWavefunction_2___Wavefunction_2___int)
        .def("MultiplyOverlap", CartesianRepresentation_2___MultiplyOverlapWavefunction_2__)
        .def("SolveOverlap", &CartesianRepresentation<2>::SolveOverlap)
        .def("MultiplySqrtOverlap", &CartesianRepresentation<2>::MultiplySqrtOverlap)
        .def("SolveSqrtOverlap", &CartesianRepresentation<2>::SolveSqrtOverlap)
        .def("GetGlobalOverlapMatrix", &CartesianRepresentation<2>::GetGlobalOverlapMatrix)
        .def("SetDistributedModel", &Representation<2>::SetDistributedModel)
        .def("GetDistributedModel", &Representation<2>::GetDistributedModel)
        .def("GetInitialShape", &Representation<2>::GetInitialShape)
        .def("GetBaseRank", &Representation<2>::GetBaseRank)
        .def("SetBaseRank", &Representation<2>::SetBaseRank)
        .def("GetId", &Representation<2>::GetId)
        .def("GetLocalGrid", &Representation<2>::GetLocalGrid)
        .def("GetLocalWeights", &Representation<2>::GetLocalWeights)
        .def("MultiplyOverlap", Representation_2___MultiplyOverlapstd__complex_double__Wavefunction_2___std__complex_double__Wavefunction_2___int)
        .def("IsOrthogonalBasis", &Representation<2>::IsOrthogonalBasis)
    );
    register_ptr_to_python< boost::shared_ptr< CartesianRepresentation<2> > >();
    delete CartesianRepresentation_2_scope;

    scope* CartesianRepresentation_3_scope = new scope(
    class_< CartesianRepresentation<3>, boost::noncopyable >("CartesianRepresentation_3", init<  >())
        .def(init< CartesianRange& >())
        .def(init< blitz::TinyVector<CartesianRange,3>& >())
        .def_readwrite("Range", &CartesianRepresentation<3>::Range)
        .def("Copy", &CartesianRepresentation<3>::Copy)
        .def("GetRange", &CartesianRepresentation<3>::GetRange, return_value_policy< copy_const_reference >())
        .def("GetGlobalGrid", &CartesianRepresentation<3>::GetGlobalGrid)
        .def("GetGlobalWeights", &CartesianRepresentation<3>::GetGlobalWeights)
        .def("GetScalarWeight", &CartesianRepresentation<3>::GetScalarWeight)
        .def("GetFullShape", &CartesianRepresentation<3>::GetFullShape)
        .def("InnerProduct", &CartesianRepresentation<3>::InnerProduct)
        .def("ApplyConfigSection", &CartesianRepresentation<3>::ApplyConfigSection)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_3___MultiplyIntegrationWeightsWavefunction_3___Wavefunction_3___int)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_3___MultiplyIntegrationWeightsWavefunction_3___Wavefunction_3__)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_3___MultiplyIntegrationWeightsWavefunction_3___int)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_3___MultiplyIntegrationWeightsWavefunction_3__)
        .def("MultiplyOverlap", CartesianRepresentation_3___MultiplyOverlapWavefunction_3___Wavefunction_3___int)
        .def("MultiplyOverlap", CartesianRepresentation_3___MultiplyOverlapWavefunction_3__)
        .def("SolveOverlap", &CartesianRepresentation<3>::SolveOverlap)
        .def("MultiplySqrtOverlap", &CartesianRepresentation<3>::MultiplySqrtOverlap)
        .def("SolveSqrtOverlap", &CartesianRepresentation<3>::SolveSqrtOverlap)
        .def("GetGlobalOverlapMatrix", &CartesianRepresentation<3>::GetGlobalOverlapMatrix)
        .def("SetDistributedModel", &Representation<3>::SetDistributedModel)
        .def("GetDistributedModel", &Representation<3>::GetDistributedModel)
        .def("GetInitialShape", &Representation<3>::GetInitialShape)
        .def("GetBaseRank", &Representation<3>::GetBaseRank)
        .def("SetBaseRank", &Representation<3>::SetBaseRank)
        .def("GetId", &Representation<3>::GetId)
        .def("GetLocalGrid", &Representation<3>::GetLocalGrid)
        .def("GetLocalWeights", &Representation<3>::GetLocalWeights)
        .def("MultiplyOverlap", Representation_3___MultiplyOverlapstd__complex_double__Wavefunction_3___std__complex_double__Wavefunction_3___int)
        .def("IsOrthogonalBasis", &Representation<3>::IsOrthogonalBasis)
    );
    register_ptr_to_python< boost::shared_ptr< CartesianRepresentation<3> > >();
    delete CartesianRepresentation_3_scope;

    scope* CartesianRepresentation_4_scope = new scope(
    class_< CartesianRepresentation<4>, boost::noncopyable >("CartesianRepresentation_4", init<  >())
        .def(init< CartesianRange& >())
        .def(init< blitz::TinyVector<CartesianRange,4>& >())
        .def_readwrite("Range", &CartesianRepresentation<4>::Range)
        .def("Copy", &CartesianRepresentation<4>::Copy)
        .def("GetRange", &CartesianRepresentation<4>::GetRange, return_value_policy< copy_const_reference >())
        .def("GetGlobalGrid", &CartesianRepresentation<4>::GetGlobalGrid)
        .def("GetGlobalWeights", &CartesianRepresentation<4>::GetGlobalWeights)
        .def("GetScalarWeight", &CartesianRepresentation<4>::GetScalarWeight)
        .def("GetFullShape", &CartesianRepresentation<4>::GetFullShape)
        .def("InnerProduct", &CartesianRepresentation<4>::InnerProduct)
        .def("ApplyConfigSection", &CartesianRepresentation<4>::ApplyConfigSection)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_4___MultiplyIntegrationWeightsWavefunction_4___Wavefunction_4___int)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_4___MultiplyIntegrationWeightsWavefunction_4___Wavefunction_4__)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_4___MultiplyIntegrationWeightsWavefunction_4___int)
        .def("MultiplyIntegrationWeights", CartesianRepresentation_4___MultiplyIntegrationWeightsWavefunction_4__)
        .def("MultiplyOverlap", CartesianRepresentation_4___MultiplyOverlapWavefunction_4___Wavefunction_4___int)
        .def("MultiplyOverlap", CartesianRepresentation_4___MultiplyOverlapWavefunction_4__)
        .def("SolveOverlap", &CartesianRepresentation<4>::SolveOverlap)
        .def("MultiplySqrtOverlap", &CartesianRepresentation<4>::MultiplySqrtOverlap)
        .def("SolveSqrtOverlap", &CartesianRepresentation<4>::SolveSqrtOverlap)
        .def("GetGlobalOverlapMatrix", &CartesianRepresentation<4>::GetGlobalOverlapMatrix)
        .def("SetDistributedModel", &Representation<4>::SetDistributedModel)
        .def("GetDistributedModel", &Representation<4>::GetDistributedModel)
        .def("GetInitialShape", &Representation<4>::GetInitialShape)
        .def("GetBaseRank", &Representation<4>::GetBaseRank)
        .def("SetBaseRank", &Representation<4>::SetBaseRank)
        .def("GetId", &Representation<4>::GetId)
        .def("GetLocalGrid", &Representation<4>::GetLocalGrid)
        .def("GetLocalWeights", &Representation<4>::GetLocalWeights)
        .def("MultiplyOverlap", Representation_4___MultiplyOverlapstd__complex_double__Wavefunction_4___std__complex_double__Wavefunction_4___int)
        .def("IsOrthogonalBasis", &Representation<4>::IsOrthogonalBasis)
    );
    register_ptr_to_python< boost::shared_ptr< CartesianRepresentation<4> > >();
    delete CartesianRepresentation_4_scope;

    class_< CartesianRange >("CartesianRange", init<  >())
        .def(init< double, double, int, optional< bool > >())
        .def(init< const CartesianRange& >())
        .def_readwrite("Min", &CartesianRange::Min)
        .def_readwrite("Max", &CartesianRange::Max)
        .def_readwrite("Dx", &CartesianRange::Dx)
        .def_readwrite("Count", &CartesianRange::Count)
        .def_readwrite("TranslatedGrid", &CartesianRange::TranslatedGrid)
        .def("GetGrid", &CartesianRange::GetGrid, return_value_policy< return_by_value >())
        .def("GetWeights", &CartesianRange::GetWeights, return_value_policy< return_by_value >())
        .def("GetPosition", &CartesianRange::GetPosition)
        .def("GetIndex", &CartesianRange::GetIndex)
        .def("GetOverlapMatrix", &CartesianRange::GetOverlapMatrix)
    ;

}

