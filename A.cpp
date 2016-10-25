//// https://code.google.com/codejam/contest/5264486/dashboard#s=p0
//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <string>
//#include <vector>
//using namespace std;
//#define LL long long
//const int maxn = 2001;
//int n, m;
//
//double dp[maxn][maxn];
//
//int mainA() {
//  freopen("/Users/yuxiao/ClionProjects/RoundD_APAC_Test_2017/in",
//          "r", stdin);
//  freopen("/Users/yuxiao/ClionProjects/RoundD_APAC_Test_2017/out",
//          "w", stdout);
//
//  memset(dp, 0.0, sizeof(dp));
//  for (int i = 1; i < maxn; i++) {
//    dp[i][0] = 1.0;
//  }
//  for (int i = 1; i < maxn; i++) {
//    for (int j = 1; j < maxn; j++) {
//      if (i > j) {
//        double tp = (double) i / (double) (i + j);
//        double tq = 1 - tp;
//        dp[i][j] = dp[i - 1][j] * tp + dp[i][j - 1] * tq;
//      }
//    }
//  }
//
//  int T, t;
//  cin >> T;
//  t = 1;
//  double ans;
//  while (T--) {
//    cin >> n >> m;
//    if (m == 0) {
//      printf("Case #%d: %.8lf\n", t++, 1.0);
//      continue;
//    }
//    printf("Case #%d: %.8lf\n", t++, dp[n][m]);
//  }
//  return 0;
//}
