#ifndef _MY_CONTROLLER_H_
#define _MY_CONTROLLER_H_

class MyController : public sim::Controller {
 public:
  MyController()
      : _speed(0.0)
      , _steer(0.0) {
  }
  ~MyController() {}

  void Start(sim::ModelPtr& model) override {
    _speed = 0.0;
    _steer = 0.0;
    model->SetSpeed(_speed);
    model->SetSteer(_steer);

    printf ("Press:\t'a' to increase speed.\n"
            "\t'z' to decrease speed.\n"
            "\t',' to steer left.\n"
            "\t'.' to steer right.\n"
            "\t' ' to reset speed and steering.\n");
  }

  void Command(sim::ModelPtr& model, int cmd) override {
    switch (cmd) {
      case 'a': case 'A':
        _speed += 0.3;
        break;
      case 'z': case 'Z':
        _speed -= 0.3;
        break;
      case ',':
        _steer -= 0.5;
        break;
      case '.':
        _steer += 0.5;
        break;
      case ' ':
        _speed = 0;
        _steer = 0;
        break;
    }
    model->SetSpeed(_speed);
    model->SetSteer(_steer);
  }

  void Loop(sim::ModelPtr& model, int pause) override {

  }

 private:
  float _speed;
  float _steer;
};

#endif // _MY_CONTROLLER_H_
