#include <iostream>
#include <time.h>
#include <queue>
#include <functional>
#include "customer.h"
#include "seller.h"
#include "high_seller.h"
#include "constants.h"

using namespace std;

int main()
{
	srand(time(NULL));
	int N = 0;
	cin >> N;
	high_seller high_sel;
	seller* H = &high_sel;
	H->serve_customer();
	H->generate_customers(N);
	while (!H->queue.empty())
	{
		cout << H->queue.top().arrival_time << endl;
		H->queue.pop();
	}
	return 0;
}
