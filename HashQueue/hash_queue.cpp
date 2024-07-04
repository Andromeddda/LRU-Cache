#include "hash_queue.hpp"

HashQueue::HashQueue(size_t capacity) : capacity_(capacity) {}

size_t HashQueue::size() { return capacity_; }