#include "IdleState.h"

IdleState::IdleState() {}

void IdleState::Enter() {}
void IdleState::Leave() {}
void IdleState::Execute(int event) {
  printf("IdleState\n");
}


StatePtr IdleState::GetNextState() const {
  return nullptr;
}
