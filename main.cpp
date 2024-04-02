#include <bits/stdc++.h>
#define PII pair<int, int>
#define PDI pair<double, int>

const int N = 210, n = 200;
const double k1, k2, k3, k4;
int frame_time, money;

#include "Robot_Boat_Distribute.h"

using namespace std;
int main() {
  cin.tie(nullptr)->ios::sync_with_stdio(false);
  cout.tie(0);
  Robot_Boat_Distribute RBD;
  RBD.Init();
  for (int zhen = 1; zhen <= 15000; ++zhen) {
    cin >> frame_time >> money;
    RBD.frame_input();
    RBD.buy_robot();
    RBD.make_robot_command();
    RBD.buy_boat();
    RBD.make_boat_command();
  }
  return 0;
}