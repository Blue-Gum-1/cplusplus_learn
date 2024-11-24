//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//#define x first
//#define y second
//#define endl "\n"
//#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
//#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
//using namespace std;
//
//typedef pair<int, int> PII;
//typedef long long ll;
//const int N = 1e2 + 10, mod = 1e9 + 7;
//
//int n, m;
//bool vis[N][N];
//char g[N][N];
//
//int fx[][4] = { {0, 0, 1, -1}, {1, -1, 0, 0} };
//
//int bfs(int startX, int startY, int endX, int endY) {
//    if (startX == endX && startY == endY) return 0;
//
//    queue<pair<PII, int>> q;
//    q.push({ { startX, startY }, 0 });
//    vis[startX][startY] = true;
//
//    while (!q.empty()) {
//        PII now = q.front().x;
//        int step = q.front().y;
//        q.pop();
//
//        rep(i, 0, 3) {
//            int a = now.x + fx[0][i];
//            int b = now.y + fx[1][i];
//
//            if (a < 0 || a >= n || b < 0 || b >= m) continue;
//            if (vis[a][b]) continue;
//            if (g[a][b] == '#') continue;
//
//            if (a == endX && b == endY) return step + 1;
//
//            vis[a][b] = true;
//            q.push({ { a, b }, step + 1 });
//        }
//    }
//    return -1;
//}
//
///*
//
//*/
//
//int mainbfs()
//{
//    cin >> n >> m;
//    rep(i, 0, n - 1) scanf("%s", g[i]);
//
//    int res = bfs(0, 0, n - 1, m - 1);
//    cout << "res = " << res << endl;
//
//    system("pause");
//    return EXIT_SUCCESS;
//}
