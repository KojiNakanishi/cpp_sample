#ifndef _MY_CONTROLLER_H_
#define _MY_CONTROLLER_H_

#include "sim/Controller.h"
#include "Context.h"
#include <memory>

class MyController : public sim::Controller {
 public:
  MyController();
  ~MyController();

  void Start(sim::ModelPtr& model) override;
  void Command(sim::ModelPtr& model, int cmd) override;
  void Loop(sim::ModelPtr& model, int pause) override;

 private:
  float _speed;
  float _steer;

  std::unique_ptr<Context> _stateContext;
};

#endif // _MY_CONTROLLER_H_
