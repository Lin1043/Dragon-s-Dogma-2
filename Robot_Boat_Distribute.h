#include <bits/stdc++.h>

#include "Berth.h"
#include "Boat.h"
#include "Goods_Table.h"
#include "MyMap.h"
#include "Robot.h"

using namespace std;

class Robot_Boat_Distribute {
 private:
  int robot_num, berth_num, boat_num, boat_capacity;
  MyMap& mp = MyMap::GetMap();
  vector<unique_ptr<Robot>> robot;
  vector<unique_ptr<Berth>> berth;
  vector<unique_ptr<Boat>> boat;

 public:
  void Init();
  void frame_input();
  void buy_robot();
  void make_boat_command();
  void buy_boat();
  void make_robot_command();
};