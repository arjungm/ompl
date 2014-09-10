#include "ompl/base/objectives/StateCostIntegralObjective.h"

namespace ompl
{
  namespace base
  {
    class IntegralClearanceObjective : public StateCostIntegralObjective
    {
      public:
        IntegralClearanceObjective(const SpaceInformationPtr& si);
        Cost stateCost(const State* s) const;
    };
  }
}
