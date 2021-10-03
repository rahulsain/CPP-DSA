/*
Recently, Petya learned about a new game "Slay the Dragon". As the name suggests, the player will have to fight with dragons. To defeat a dragon, you have to kill it and defend your castle. To do this, the player has a squad of n heroes, the strength of the i-th hero is equal to ai.

According to the rules of the game, exactly one hero should go kill the dragon, all the others will defend the castle. If the dragon's defense is equal to x, then you have to send a hero with a strength of at least x to kill it. If the dragon's attack power is y, then the total strength of the heroes defending the castle should be at least y.

The player can increase the strength of any hero by 1 for one gold coin. This operation can be done any number of times.

There are m dragons in the game, the i-th of them has defense equal to xi and attack power equal to yi. Petya was wondering what is the minimum number of coins he needs to spend to defeat the i-th dragon.

Note that the task is solved independently for each dragon (improvements are not saved).

Input
The first line contains a single integer n (2≤n≤2⋅105) — number of heroes.

The second line contains n integers a1,a2,…,an (1≤ai≤1012), where ai is the strength of the i-th hero.

The third line contains a single integer m (1≤m≤2⋅105) — the number of dragons.

The next m lines contain two integers each, xi and yi (1≤xi≤1012;1≤yi≤1018) — defense and attack power of the i-th dragon.

Output
Print m lines, i-th of which contains a single integer — the minimum number of coins that should be spent to defeat the i-th dragon.

Example input:
4
3 6 2 3
5
3 12
7 9
4 14
1 10
8 7

output:
1
2
4
0
2

Note:
To defeat the first dragon, you can increase the strength of the third hero by 1, then the strength of the heroes will be equal to [3,6,3,3]. To kill the dragon, you can choose the first hero.

To defeat the second dragon, you can increase the forces of the second and third heroes by 1, then the strength of the heroes will be equal to [3,7,3,3]. To kill the dragon, you can choose a second hero.

To defeat the third dragon, you can increase the strength of all the heroes by 1, then the strength of the heroes will be equal to [4,7,3,4]. To kill the dragon, you can choose a fourth hero.

To defeat the fourth dragon, you don't need to improve the heroes and choose a third hero to kill the dragon.

To defeat the fifth dragon, you can increase the strength of the second hero by 2, then the strength of the heroes will be equal to [3,8,2,3]. To kill the dragon, you can choose a second hero.

*/
#include <bits/stdc++.h>

using namespace std;

using li = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n;
  cin >> n;
  vector<li> a(n);
  for (auto &x : a) cin >> x;
  sort(a.begin(), a.end());
  li sum = accumulate(a.begin(), a.end(), 0LL);
  int m;
  cin >> m;
  while (m--) {
    li x, y;
    cin >> x >> y;
    int i = lower_bound(a.begin(), a.end(), x) - a.begin();
    li ans = 2e18;
    if (i > 0) ans = min(ans, (x - a[i - 1]) + max(0LL, y - sum + a[i - 1]));
    if (i < n) ans = min(ans, max(0LL, y - sum + a[i]));
    cout << ans << '\n';
    }
}