#pragma once
#include <queue>
#include "customer.h"
using namespace std;

class seller
{
protected:
	static vector<vector<string>> seats;// will have to make it atomic
private:
	//priority_queue<customer, vector<customer>> queue;
public:
	virtual void serve_customer() = 0; // make children classes implement this
	virtual int generate_random_time() = 0; // make children implement this
	void print_seats();
	void generate_customers(int N);
	priority_queue<customer, vector<customer>> queue;
};