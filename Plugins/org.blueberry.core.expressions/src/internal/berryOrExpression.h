/*============================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center (DKFZ)
All rights reserved.

Use of this source code is governed by a 3-clause BSD license that can be
found in the LICENSE file.

============================================================================*/

#ifndef __BERRY_OR_EXPRESSION_H__
#define __BERRY_OR_EXPRESSION_H__

#include "berryCompositeExpression.h"

namespace berry {

class OrExpression : public CompositeExpression {

public:

  EvaluationResult::ConstPointer Evaluate(IEvaluationContext* context) const override;

  bool operator==(const Object* object) const override;
};

} // namespace berry

#endif // __BERRY_OR_EXPRESSION_H__
