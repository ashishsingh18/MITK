/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#include "mitkMaximumCurveDescriptionParameter.h"
#include <algorithm>

const std::string mitk::MaximumCurveDescriptionParameter::PARAMETER_NAME = "MaximumConcentrationUptake";

mitk::MaximumCurveDescriptionParameter::MaximumCurveDescriptionParameter()
{
}

mitk::MaximumCurveDescriptionParameter::~MaximumCurveDescriptionParameter()
{
}

mitk::CurveDescriptionParameterBase::DescriptionParameterNamesType mitk::MaximumCurveDescriptionParameter::GetDescriptionParameterName() const
{
  DescriptionParameterNamesType result = { PARAMETER_NAME };
  return result;
}

mitk::CurveDescriptionParameterBase::DescriptionParameterResultsType mitk::MaximumCurveDescriptionParameter::ComputeCurveDescriptionParameter(const CurveType &curve, const CurveGridType &grid) const
{
  DescriptionParameterResultsType results;
  CurveDescriptionParameterResultType maximum = itk::NumericTraits<CurveDescriptionParameterResultType>::NonpositiveMin();
  int steps = grid.GetSize();

  for (int i = 0; i < steps - 1; ++i)
  {
    maximum = std::max(maximum, curve(i));
  }

  results.push_back(maximum);
  return results;
}
