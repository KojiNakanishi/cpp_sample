#include "StateFactory.h"
#include "InitializeState.h"
#include "IdleState.h"
#include <array>

namespace {
static const std::array<StatePtr, StateFactory::kNumberOfState> kStateTable = {
  StatePtr(new InitializeState),
  StatePtr(new IdleState),
};
}

StatePtr StateFactory::CreateState(int state) {
  if (state < kNumberOfState) {
    return kStateTable[state];
  }
  return nullptr;
}
