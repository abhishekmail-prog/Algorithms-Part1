#include <iostream>
using namespace std;

class QuickFind {
private:
	int id[10];

public:
	// Constructor
	QuickFind() {
		for(int i = 0; i < 10; i++) {
			id[i] = i;
		}
	}

	// Check connection
	bool connected(int p, int q) {
		return id[p] == id[q]; 
	}

	// Union operation
	void unite(int p, int q) {
		int pid = id[p];
		int qid = id[q];

		for(int i = 0; i < 10; i++) {
			if(id[i] == pid) {
				id[i] = qid;
			}
		}
	}

	void display() {
		for(int i = 0; i < 10; i++) {
			std::cout << id[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	
	QuickFind qf;

	qf.unite(1, 2);
	qf.unite(2, 3);

	qf.display();

	std::cout << qf.connected(1, 3) << endl;

	return 0;
}
