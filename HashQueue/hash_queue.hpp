#ifndef HEADER_GUARD_HASH_QUEUE_HPP
#define HEADER_GUARD_HASH_QUEUE_HPP

#include <cstdio>

class HashQueue {
public:
	HashQueue() = delete;
	HashQueue(size_t capacity);

	size_t size();
private:
	size_t capacity_;
};

#endif // HEADER_GUARD_HASH_QUEUE_HPP