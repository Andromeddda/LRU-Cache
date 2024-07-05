#include <iostream>
#include "hash_queue.hpp"

int main(void) {
	HashQueue<int> hash_q = HashQueue<int>(4);
	hash_q.insert(1);
	hash_q.insert(2);
	hash_q.insert(3);
	hash_q.insert(1);
	hash_q.display();
	hash_q.insert(4);
	hash_q.insert(5);
	hash_q.display();
	return 0;
}