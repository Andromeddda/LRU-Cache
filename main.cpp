#include <iostream>
#include "hash_queue.hpp"

int main(void) {
	HashQueue<int> hui = HashQueue<int>(3);
	hui.insert(1);
	hui.insert(2);
	hui.insert(3);
	hui.insert(1);
	hui.display();
	hui.insert(4);
	hui.insert(5);
	hui.display();
	return 0;
}