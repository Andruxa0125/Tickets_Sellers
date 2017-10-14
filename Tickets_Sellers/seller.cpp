#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include "customer.h"

using namespace std;

class seller
{
protected:
	// idea is that sellers from different categories will use appropriate seats to modify
	// this way when medium seller makes a transaction, high seller also can sell his tickets
	static vector<vector<string>> high_seats; // only high_sellers will use this
	static vector<vector<string>> med_seats; // only med_sellers will use this
	static vector<vector<string>> low_seats; // only low_sellers will use this
private:
	//priority_queue<customer, vector<customer>> queue;
public:
	virtual void serve_customer() = 0; // make children classes implement this
	virtual int generate_random_time() = 0; // make children implement this
	void print_seats();
	void generate_customers(int N);
	priority_queue<customer, vector<customer>> queue;
	int fuck;

};
vector<vector<string>> seller::high_seats;
vector<vector<string>> seller::med_seats;
vector<vector<string>> seller::low_seats;

void seller::generate_customers(int N)
{
	// generate bunch of customers with random arrival time.
	for (int i = 0; i < N; i++)
	{
		customer temp;
		queue.push(temp);
	}
}
void seller::print_seats()
{
	for (const auto& row : high_seats)
	{
		for (const auto& s : row)
		{
			cout << s << " ";
		}
		cout << endl;
	}
	for (const auto& row : med_seats)
	{
		for (const auto& s : row)
		{
			cout << s << " ";
		}
		cout << endl;
	}
	for (const auto& row : low_seats)
	{
		for (const auto& s : row)
		{
			cout << s << " ";
		}
		cout << endl;
	}
}

// use for medium in class
//int generate_random_time()
//{
//	// will return 2, 3, or 4.
//	return rand() % 3 + 2;
//}
//
//use for low
//int generate_random_time()
//{
//	// will return 4, 5, 6 or 7.
//	return rand() % 4 + 4;
//}
