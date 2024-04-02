#include <bits/stdc++.h>
using namespace std;

class MyMap {
 private:
  static MyMap* mp;
  MyMap();

 public:
  static MyMap& GetMap();
  bool check_robot_movable();
  bool check_boat_movable();
};