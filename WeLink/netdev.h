#pragma once

#include "pch.h"
#include <string>

class netdev
{
public:
	netdev();
	~netdev();
	netdev(netdev&) = delete;
	netdev(netdev&&) = delete;

public:
	netdev& operator=(netdev&) = delete;
	netdev& operator=(netdev&&) = delete;

public:
	void start();

private:
	std::string device_name_;
};
