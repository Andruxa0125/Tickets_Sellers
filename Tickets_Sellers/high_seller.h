#pragma once
#include "seller.h"

static int customer_num = 1;// based on this you can generate the name of your customer
class high_seller : public seller
{
private:
	int generate_random_time();
public:
	void serve_customer();
	high_seller();
};