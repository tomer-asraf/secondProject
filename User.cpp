#include <string>
#include "DeviceList.h"
#include "User.h"

void User::init(unsigned int id, std::string username, unsigned int age)
{
	_id = id;
	_age = age;
	_userName = username;
	_list.init();
}

void User::clear()
{
	_id = 0;
	_age = 0;
	_userName = "";
}

unsigned int User::getID() const
{
	return _id;
}

std::string User::getUserName() const 
{
	return _userName;
}

unsigned int User::getAge() const
{
	return _age;
}

DevicesList& User::getDevices()
{
	return _list;
}

void User::addDevice(Device newDevice)
{
	_list.add(newDevice);
}

bool User::checkIfDevicesAreOn() const
{
	DeviceNode* curr = _list.get_first();
	while (curr)
	{
		if (!(curr->get_data().isActive()))
		{
			return false;
		}
		curr = curr->get_next();
	}
	return true;
	
}
