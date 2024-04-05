#ifndef BERTH_H
#define BERTH_H

#include <stack>

#include "Goods_Table.h"
#include "MyMap.h"
class Berth {
 private:
  int berth_id;
  int x, y;
  int transport_time;  // 估算的送货时间
  int loading_speed;
  std::stack<int> goods;  // 存储当前泊位堆积物品的价值
  int tot_val;

 public:
  Berth();
  ~Berth();
  void berth_bfs();
  int get_transport_time();
  double calc_berth_val(int boat_capacity);  // 计算送货到该泊位的估值
  int get_tot_val();  // 获取当前泊位堆积货物的总价值
  int get_num();      // 获取当前泊位堆积货物的数量
};

#endif