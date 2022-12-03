#include <iostream>

using namespace std;

int d[10]; //luu khoan cach nho nhat giua cac dinh
int dinhtruoc[10];
int daDuyet[10];//danh dau cac dinh da duyet
int n = 9;
int dinhChuaDuyetvaKcbeNhat(int g[][10]) {
    int u = -1; //dinh can tim
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (daDuyet[i] == 0 && d[i] < min) {
            u = i;
            min = d[i];
        }
    }
    return u;
}

void inDuongDi(int s,int f) {
    cout << "\n(" << s << ", " << f << " )=" << d[f] << " duong di: " << f;
    int k = f;
    while (k != s) 
    {
        cout << "<-" << dinhtruoc[k];
        k = dinhtruoc[k];
    }
}

void Dijkstra(int g[][10], int s)
{
      
     
      for (int i = 0; i < n; i++)
      {
          dinhtruoc[i] = -1;
          d[i] = INT_MAX;
          daDuyet[i] = 0;
      }
      d[s] = 0;
      int soDinhDaDuyet = n;
      int u; //u la dinh chua duyet va d[u] be nhat
      while (soDinhDaDuyet>0)
      {
          u = dinhChuaDuyetvaKcbeNhat(g);
          if (u == -1) break;
          daDuyet[u] = 1;
          for (int v = 0; v < n; v++) {
              if (daDuyet[v] == 0 && g[u][v] != 0 && d[v] > d[u] + g[u][v]) {
                  d[v] = d[u] + g[u][v];
                  dinhtruoc[v] = u;
              }
          }
          soDinhDaDuyet--;
      }
      cout << "\nCac duong di tu dinh " << s << " den cac dinh con lai la:" << endl;
      for (int i = 0; i < n; i++) {
          if (d[i] > 0 && d[i] < INT_MAX) {
              inDuongDi(s, i);
          }
      }
}

int main()
{
    int g[10][10] = {
        {0,1,4,0,0,0,0,0}
        ,{1,0,2,9,0,0,4,2}
        ,{4,2,0,1,3,0,0,0}
        ,{0,9,1,0,1,3,1,0}
        ,{0,0,3,1,0,1,0,0}
        ,{0,0,0,3,1,0,6,0}
        ,{0,4,0,1,0,6,0,14}
        ,{0,2,0,0,0,0,14,0}

    };
    int s = 1;
    ;Dijkstra(g, s);

    return 0;
}
