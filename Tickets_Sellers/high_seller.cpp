#include <iostream>
#include <string>
#include "seller.h"
#include "high_seller.h"

using namespace std;

high_seller::high_seller()
{
	if (seats.size() == 0)
	{
		seats.resize(10);
		for(auto &v : seats)
			v.resize(10);
		// this should be done in every seller class
	}
	//for (auto s : high_seats[0])
	//	cout << s << "  s ";
}
void high_seller::serve_customer()
{
	// put your logic here
	customer_num++;
}
int high_seller::generate_random_time()
{
	// will return 1 or 2.
	return rand() % 2 + 1;
}