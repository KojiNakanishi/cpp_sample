#include "Context.h"
#include "StateFactory.h"

Context::Context()
  : _currentState(StateFactory::CreateState(StateFactory::kInitializeState))
{
  
}

void Context::Update(int event) {
  if (_currentState != nullptr) {
    _currentState->Execute(event);
    StatePtr nextState = _currentState->GetNextState();
    
    if (nextState != nullptr &&
	nextState != _currentState) {
      _currentState->Leave();
      nextState->Enter();
      _currentState = nextState;
      printf("state changed!!n");
    }
  }
}

