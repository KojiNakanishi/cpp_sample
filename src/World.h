#ifndef WORLD_H_
#define WORLD_H_

class World {
public:
  World() = default;

  void CreatePlane();
  void CreateBody();

private:
  dWorldID world;
};

#endif // WORLD_H_
