// Weighted Quick Union + Path Compression

// Small tree -> Big tree

#include <iostream>
using namespace std;

class DSU {
private:
	int parent[10];
	int size[10];

public:
	DSU() {
		for(int i = 0; i < 10; i++) {
			parent[i] = i;
			size[i] = 1;
		}  
	}

	// Find root with path compression
	int root(int i) {
		while(i != parent[i]) {
			
			// Path compression
			parent[i] = parent[parent[i]];

			i = parent[i];
		}
		
		return i;
	}

	bool connected(int p, int q) {
		return root(p) == root(q);
	}

	void unite(int p, int q) {
		int rootP = root(p);
		int rootQ = root(q);

		if(rootP == rootQ) {
			return;
		}

		// Weighted Union
		if(size[rootP] < size[rootQ]) {
			parent[rootP] = rootQ;
			size[rootQ] += size[rootP];
		}
		else {
			parent[rootQ] = rootP;
			size[rootP] += size[rootQ];
		}
	}

	void display() {
		
		for(int i = 0; i < 10; i++) {
			cout << parent[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	
	DSU dsu;

	dsu.unite(1, 2);
	dsu.unite(2, 3);
	dsu.unite(4, 5);
	dsu.unite(3, 5);

	dsu.display();

	cout << dsu.connected(1, 5) << endl;

	return 0;
}
