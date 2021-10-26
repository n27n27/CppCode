#pragma once
class CharStack {
	enum {size = 20};
	int top;
	char buf[size];

public:
	CharStack() :top{ size } {}			// »ý¼ºÀÚ
	bool chkEmpty() const {
		return top == size;
	}

	bool chkFull() const {
		return !top;
	}

	bool push(char ch);
	char pop();
};