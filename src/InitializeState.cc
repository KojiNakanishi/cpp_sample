#include "InitializeState.h"
#include "StateFactory.h"

namespace {
  constexpr int kInitializeCount = 20;
}

InitializeState::InitializeState()
  : _count(0) {}

void InitializeState::Enter() {
  _count = 0;
}

void InitializeState::Leave() {
}

void InitializeState::Execute(int event) {
  ++_count;
  printf("InitializeState count=%d\n", _count);
}

StatePtr InitializeState::GetNextState() const {
  if (_count > kInitializeCount) {
    return StateFactory::CreateState(StateFactory::kIdleState);
  }
  return nullptr;
}
