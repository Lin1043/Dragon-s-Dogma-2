#ifndef ROBOT_H
#define ROBOT_H

#include <bits/stdc++.h>

#include "Goods_Table.h"
#include "MyMap.h"

using PII = std::pair<int , int>;
using PDI = std::pair<double , int>;

class Robot {
 private:
  int robot_id, x, y, free, sts;

  int ideal_direction;
  int real_direction;
  int has_moved;
  int dest_good;
  int self_val;

 public:
  Robot();
  ~Robot();
  
  void update(int x, int y, int free, int sts);
  void robot_bfs();
  void set_ideal_direction(int ideal_direction);
  void set_dest_goods(int id);
  PII get_pos();
  PDI get_best_goods();
};

#endif