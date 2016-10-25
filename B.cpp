// https://code.google.com/codejam/contest/5264486/dashboard#s=p0
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
#define LL long long
const int maxn = 101;
int R, C;
int grid[maxn][maxn];
int four_grid[maxn][maxn];

int main() {
  freopen("/Users/yuxiao/ClionProjects/RoundD_APAC_Test_2017/in",
          "r", stdin);
  freopen("/Users/yuxiao/ClionProjects/RoundD_APAC_Test_2017/out",
          "w", stdout);
//  memset(grid, 1, sizeof(grid));
//  memset(result, 1, sizeof(result));
  for (int i = 0; i < maxn; ++i) {
    for (int j = 0; j < maxn; ++j) {
      grid[i][j] = 1;
    }
  }

  grid[0][2] = 0, grid[1][1] = 0, grid[2][0] = 0;

  for (int j = 1; j < maxn; j++) {
    if (j - 3 >= 1 && grid[0][j - 3] == 0) {
      grid[0][j] = 0;
    }

  }

  for (int j = 2; j < maxn; j++) {
    if (j - 3 >= 1 && grid[1][j - 3] == 0) {
      grid[1][j] = 0;
    }

  }

  for (int j = 3; j < maxn; j++) {
    if (j - 3 >= 0 && grid[2][j - 3] == 0) {
      grid[2][j] = 0;

    }

  }

  for (int i = 3; i < maxn; i++) {
    for (int j = 0; j < maxn; ++j) {
      if (grid[i - 3][j] == 0) {
        grid[i][j] = 0;
      }

    }

  }
  int T, t;
  cin >> T;
  t = 1;
  int ans;
  while (T--) {
    cin >> R >> C;
    if (R <= 2 && C <= 2) {
      ans = R * C;
    } else {
      ans = 0 ;
      for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
//          cout<<grid[i][j] << " ";
          ans += grid[i][j];
        }
//        cout<<endl;
      }

      int r_s = R/3, r_s_mod = R%3;
      int c_s = C/3, c_s_mod = C%3;
      int temp1 = r_s *4 * c_s;
      int sum = temp1 + r_s*c_s;
      int temp2 = ( (C/3)*2 + (C%3) ) *r_s_mod;
      int temp3 = ( (R/3)*2 + (R%3) ) * c_s_mod;
      int temp4 = temp2+temp3 - r_s_mod*c_s_mod;
      int temp5 = temp4;
      sum += temp5;

      if(ans < sum){
        ans = sum;
      }
    }


    printf("Case #%d: %d\n", t++, ans);
  }
  return 0;
}
