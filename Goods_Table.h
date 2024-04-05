#ifndef GOODS_TABLES_H
#define GOODS_TABLES_H 
#include <deque>

#include "MyMap.h"

class Goods {
 private:
  int goods_id, x, y, gen_time, val, tag, dest_berth;

 public:
  bool check_alive(int x);
};

class Goods_Table {
 private:
  int tot_goods;
  std::deque<std::shared_ptr<Goods>> goods_list;
  Goods *goods_map[N][N];

  static Goods_Table *GT;
  
  Goods_Table(); 

 public:
  static Goods_Table &GetGT();

  void insert(int x, int y, int val, int gen_time);
  void clear_disappeared_goods();
};

#endif