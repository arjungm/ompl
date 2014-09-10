#include "ompl/base/objectives/IntegralClearanceObjective.h"


ompl::base::IntegralClearanceObjective::IntegralClearanceObjective(const ompl::base::SpaceInformationPtr& si) 
: ompl::base::StateCostIntegralObjective(si, true)
{
}

ompl::base::Cost ompl::base::IntegralClearanceObjective::stateCost(const ompl::base::State* s) const
{
  return ompl::base::Cost(1 / si_->getStateValidityChecker()->clearance(s));
}
