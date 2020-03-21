#pragma once

#include "..\Defs.h"

#pragma once
class Cook
{
	int ID;
	ORD_TYPE type;	//for each order type there is a corresponding type (VIP, Normal, Vegan)
	int speed;		//dishes it can prepare in one clock tick (in one timestep)
	int finishedOrders; //number of orders that this cook has finished 

public:
	Cook();
	virtual ~Cook();

	int GetID() const;
	ORD_TYPE GetType() const;

	void setID(int);
	void setType(ORD_TYPE);

	void setSpeed(int s);
	int getSpeed() const;

	void setFinishedOrders(int orders);
	int getFinishedOrders() const;

};
