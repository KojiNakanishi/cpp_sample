#ifndef _MY_CONTROLLER_H_
#define _MY_CONTROLLER_H_

#include "sim/Controller.h"

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
};

#endif // _MY_CONTROLLER_H_
