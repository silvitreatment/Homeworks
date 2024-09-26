#include <iostream>
#include <vector> 
using namespace std;

class MinHeap {
private:
	vector<int> heap; // вектор для хранения элементов кучи

	int parent(int i) { return (i - 1) / 2; }
	int left(int i) { return (2 * i + 1); }
	int right(int i) { return (2 * i + 2); }
	void heapifyUp(int i) {
		while (i != 0 && heap[parent(i)] > heap[i]) {
			swap(heap[parent(i)], heap[i]);
			i = parent(i);
		}
	}
	void heapifyDown(int i) {
		int smallest = i;
		int l = left(i);
		int r = right(i);

		if (l < heap.size() && heap[l] < heap[smallest])
			smallest = l;
		if (r < heap.size() && heap[r] < heap[smallest]) 
			smallest = r;

		if (smallest != i) {
			swap(heap[i], heap[smallest]);  
			heapifyDown(smallest); 
		}
	}

	
public:

	void insert(int key) {
		heap.push_back(key);

		heapifyUp(heap.size() - 1);

	}
	void removeMin() {
		if (heap.empty()) {
			cout << "Heap is empty dude!" << endl;
			return;
		}
		heap[0] = heap.back();
		heap.pop_back();
		heapifyDown(0);
	}
	
	int getMin() {
		if (!heap.empty())
			return heap[0];
		else {
			cout << "Heap is empty!" << endl;
			return -1;
		}
	}
	void printHeap() {
		for (int i = 0; i < heap.size(); i++) {
			cout << heap[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	MinHeap h;

	h.insert(10);
	h.insert(20);
	h.insert(5);
	h.insert(7);
	h.insert(2);

	cout << "Heap after insertions: ";
	h.printHeap();

	cout << "Minimum element: " << h.getMin() << endl;

	h.removeMin();
	cout << "Heap after removing min element: ";
	h.printHeap();

	return 0;
}
