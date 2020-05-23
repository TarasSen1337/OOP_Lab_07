#include <queue>
#include <iostream>


int main() {
	
	std::queue<int> q;
	int n, temp, a, b = 0;

	std::cout << "Enter number of items:" << std::endl;
	std::cin >> a;
	std::cout << "Enter you items:" << std::endl;
	for (int i = 0; i < a; i++) {
		std::cin >> n;
		q.push(n);
	}

	std::cout << "How many items do you want to pop?" << std::endl;
	std::cin >> b;

	if (b > a) {
		throw "Can't pop that many items!";
		b = 0;
	}

	for (int i = 0; i < b; i++) {
		q.pop();
	 }

	a = a - b;

	for (int i = 0; i < a; i++) {
		n = q.front();
		std::cout << "Element number " << i+1 << " is " << n << std::endl;
		q.push(n);
		q.pop();
	}

	std::cout << a << " is the size of the queue" << std::endl;

}