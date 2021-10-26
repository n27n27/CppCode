#ifndef VECFF_H_INCLUDED
#define VECFF_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;

class VecFF {
	int n;
	float* arr;

public:
	VecFF(int d, const float* a = nullptr) : n{ d } {
		arr = new float[d];
		if (a) memcpy(arr, a, sizeof(float) * n);
	}

	VecFF(const VecFF& fv) : n{ fv.n } {
		arr = new float[n];
		memcpy(arr, fv.arr, sizeof(float) * n);
	}

	VecFF(VecFF&& fv) noexcept : n{ fv.n }, arr{ fv.arr }{
		fv.arr = nullptr;
		fv.n = 0;

	}

	~VecFF() {
		delete[] arr;
	}

	VecFF add(const VecFF& fv) const {

		VecFF tmp(n);
		for (int i = 0; i < n; i++)
			tmp.arr[i] = arr[i] + fv.arr[i];
		return tmp;
	}

	void print() const {

		cout << "[";
		for (int i = 0; i < n; i++)
			cout << arr[i] << "";
		cout << "]";
	}
};

#endif