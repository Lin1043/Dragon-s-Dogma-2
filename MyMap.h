#ifndef MY_MAP_H
#define MY_MAP_H

#include <iostream>

const int N = 210, n = 200;

class MyMap {
 private:
  static MyMap* mp;
  MyMap();

 public:
  static MyMap& GetMap();
  bool check_robot_movable();
  bool check_boat_movable();
};
#endif