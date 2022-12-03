#include<iostream>
#include<vector>
using namespace std;

const int MAX = 1001;

struct canh {
	int x, y, w;
};

int n, m;
vector<pair<int, int>> adj[MAX];
bool visited[MAX];
void INPUT() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y, w; 
		cin >> x >> y >> w;
		adj[x].push_back({ y, w });
		adj[y].push_back({ x, w });
	}
	memset(visited, false, sizeof(visited));
}

void PRIM(int u) {
	vector<canh> MST;
	int d = 0;
	visited[u] = true;
	while (MST.size() < n - 1) {
		int MIN = INT_MAX;
		int X, Y;
		for (int i = 1; i <= n; i++) {
			if (visited[i]) {
				for (pair<int, int> it : adj[i]) {
					int j = it.first, TrongSo = it.second;
					if (!visited[j] && TrongSo < MIN) {
						MIN = TrongSo;
						X = j; Y = i;
					}
				}
			}
		}
		MST.push_back({ X, Y, MIN });
		d += MIN;
		visited[X] = true;
	}
	cout << "Cay khung cuc tieu = " << d << endl;
	cout << "Cac canh tao nen cay khung cuc tieu la:" << endl;
	for (canh e : MST) {
		cout << e.x << " " << e.y << endl;
	}
}

int main() {
	INPUT();
	PRIM(1);
}
