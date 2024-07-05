#ifndef HEADER_GUARD_HASH_QUEUE_HPP
#define HEADER_GUARD_HASH_QUEUE_HPP

#include <cstdio>
#include <iostream>

#include <list>
#include <unordered_map>

template <typename T>
class HashQueue {
public:
	// Constructors
	HashQueue() = delete;
	HashQueue(size_t capacity);

	// Size getter
	size_t size();

	void insert(const T& x);
	void display();
private:
	std::list<T> dq;
	std::unordered_map<T, typename std::list<T>::iterator> mp;

	size_t capacity_;
};


template <class T>
HashQueue<T>::HashQueue(size_t capacity) : capacity_(capacity) {}

template <class T>
size_t HashQueue<T>::size() { return capacity_; }

template <class T>
void HashQueue<T>::insert(const T& x) {
	// x is not presented in cache
	if (mp.find(x) == mp.end()) {
		// if queue is full, remove lru element
		if (dq.size() == capacity_) {
			// get lru element
			T last = dq.back();

			// remove it from the map
			mp.erase(last);

			// remove it from the queue
			dq.pop_back();
		}
	}
	// x is presented in cache
	else { 
		// delete it from the middle of queue
		dq.erase(mp[x]);
	}
	// place x in the head
	dq.push_front(x);
	mp[x] = dq.begin();
}

template <class T>
void HashQueue<T>::display() {
	std::cout << "{ ";
	for (T el : dq) {
		std::cout << el << " ";
	}
	std::cout << "}\n";
}

#endif // HEADER_GUARD_HASH_QUEUE_HPP