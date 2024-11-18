#pragma once
#include <string>
#include "Profile.h"
#include "ProfileList.h"

class SocialNetwork
{
public:
	void init(std::string networkName, int minAge);
	void clear();
	std::string getNetworkName();
	int getMinAge();
	bool addProfile(Profile profile_to_add);
	std::string getWindowsDevices();
private:
	ProfileList _profileList;
	std::string _NetworkName;
	int _minAge;

};
