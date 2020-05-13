#pragma once

#include "..\Defs.h"
#include "Order.h"

#pragma once
class Cook
{
	int ID;
	ORD_TYPE type;	//for each order type there is a corresponding type (VIP, Normal, Vegan)
	COOK_STATUS status; //status of this cook
	int speed;		//dishes it can prepare in one clock tick (in one timestep)
	int finishedOrders; //number of orders that this cook has finished 
	int breakDuration;  //duration of the break
	Order* currentOrder; //the order that being survied now by this cook
	int endBreakTime; // time step at which the break for this cook will end
	int endRestTime; // time step at which the rest for this cook will end
	int rst_prd;//Rest Period for medication

public:
	Cook();
	virtual ~Cook();

	int GetID() const;
	ORD_TYPE GetType() const;

	void setStatus(COOK_STATUS);
	COOK_STATUS getStatus() const;

	void setID(int);
	void setType(ORD_TYPE);

	void setSpeed(int s);
	int getSpeed() const;

	void setFinishedOrders(int orders);
	int getFinishedOrders() const;

	void setBreakDuration(int d);
	int getBreakDuration() const;

	void setRestperiod(int d);
	int getRestperiod() const;

	void setCurrentOrder(Order*);
	Order* getCurrentOrder() const;

	void setEndBreakTime(int);
	int getEndBreakTime()const;

	void setEndRestTime(int);
	int getEndRestTime()const;

	bool operator==(const Cook&);
	bool operator>(const Cook&);

};
