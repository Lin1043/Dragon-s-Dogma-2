#include <bits/stdc++.h>

using namespace std;

class Goods {
 private:
  int goods_id, x, y, gen_time, val, tag, dest_berth;

 public:
  bool check_alive(int x);
};

class Goods_Table {
 private:
  int tot_goods;
  deque<Goods *> goods_list;
  Goods *goods_map[N][N];
  static Goods_Table *GT;
  MyMap &mp = MyMap::GetMap();
  Goods_Table();

 public:
  static Goods_Table &GetGT();
  void insert(int x, int y, int val, int gen_time);
  void clear_disappeared_goods();
};