#include <bits/stdc++.h>

#include "Goods_Table.h"
#include "MyMap.h"

using namespace std;
class Robot {
 private:
  int robot_id, x, y, free, sts;
  MyMap& mp = MyMap::GetMap();
  Goods_Table& GT = Goods_Table::GetGT();
  int ideal_direction;
  int real_direction;
  int has_moved;
  int dest_good;
  int self_val;
  ~Robot();

 public:
  Robot();
  void update(int x, int y, int free, int sts);
  void robot_bfs();
  void set_ideal_direction(int ideal_direction);
  void set_dest_goods(int id);
  PII get_pos();
  PDI get_best_goods();
};