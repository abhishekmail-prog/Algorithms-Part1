#include <iostream>
using namespace std;

class QuickUnion {
private:
	int id[10];

public:
	// Constructor
	QuickUnion() {
		for(int i = 0; i < 10; i++) {
			id[i] = i;
		}
	}

	// Find root
	int root(int i) {
		while(i != id[i]) {
			i = id[i];
		}

		return i;
	}

	bool connected(int p, int q) {
		return root(p) == root(q);
	}

	void unite(int p, int q) {
		int rootP = root(p);
		int rootQ = root(q);

		id[rootP] = rootQ;
	}

	void display() {
		for(int i = 0; i < 10; i++) {
			cout << id[i] << " ";
		}
		cout << endl;
	}
};

int main () {
	QuickUnion qu;

	qu.unite(1, 2);
	qu.unite(2, 3);

	qu.display();

	cout << qu.connected(1, 3) << endl;
}
