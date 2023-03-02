#include <bits/stdc++.h>
using namespace std;
void search(char *pat, char *txt) {
  int M = strlen(pat);
  int N = strlen(txt);
  for (int i = 0; i <= N - M; i++) {
    int j;
    for (j = 0; j < M; j++)
      if (txt[i + j] != pat[j])
        break;
    if (j == M)
      cout << "Pattern found at index " << i << endl;
  }
}
int main() {
  cout << "Achintya \n";
  cout << "A2305220450 \n";
  cout << "enter then size of production rule: \n";
  int n;
  cin >> n;
  cout << "enter production rule:\n";
  char txt[n];
  for (int i = 0; i < n; i++) {
    cin >> txt[i];
  }
  cout << "enter the size of string:\n";
  int m;
  cin >> m;
  cout << "enter string\n";
  char pat[m];
  for (int i = 0; i < m; i++) {
    cin >> pat[i];
  }
  for (auto X : txt) {
    cout << X << " ";
  }
  cout << "\n";
  for (auto X : pat) {
    cout << X << " ";
  }
  cout << "\n";
  search(pat, txt);
  return 0;
}