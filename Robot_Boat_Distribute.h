#include <bits/stdc++.h>

#include "Berth.h"
#include "Boat.h"
#include "Goods_Table.h"
#include "MyMap.h"
#include "Robot.h"

class Robot_Boat_Distribute {
 private:
  int robot_num, berth_num, boat_num, boat_capacity;

  std::vector<std::shared_ptr<Robot>> robot;
  std::vector<std::shared_ptr<Berth>> berth;
  std::vector<std::shared_ptr<Boat>> boat;

 public:
  void Init();

  void frame_input();
  void buy_robot();
  void make_boat_command();
  void buy_boat();
  void make_robot_command();
};