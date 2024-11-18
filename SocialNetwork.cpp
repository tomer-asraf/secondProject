#include "SocialNetwork.h"

void SocialNetwork::init(std::string networkName, int minAge)
{
	_NetworkName = networkName;
	_minAge = minAge;
	_profileList.init();
}

void SocialNetwork::clear()
{
	_NetworkName = "";
	_minAge = 0;
	_profileList.clear();
}

std::string SocialNetwork::getNetworkName()
{
	return _NetworkName;
}

int SocialNetwork::getMinAge()
{
	return _minAge;
}

bool SocialNetwork::addProfile(Profile profile_to_add)
{
	if (profile_to_add.getOwner().getAge() < _minAge)
	{
		return false;
	}
	_profileList.add(profile_to_add);
	return true;
}

std::string SocialNetwork::getWindowsDevices()
{
	return std::string();
}
