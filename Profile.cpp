#include "Profile.h"
#include "Page.h"

void Profile::init(User owner)
{
	_owner = owner;
	_page.init();
	_userList.init();
}

void Profile::clear()
{
	_owner.clear();
	_userList.clear();
	_page.clearPage();
}

User Profile::getOwner()
{
	return _owner;
}

void Profile::setStatus(std::string new_status)
{
	_page.setStatus(new_status);
}

void Profile::addPostToProfilePage(std::string post)
{
	_page.addLineToPosts(post);
}

void Profile::addFriend(User friend_to_add)
{
	_userList.add(friend_to_add);
}

std::string Profile::getPage()
{
	return "Status: " + _page.getStatus() + "********************\n******************" + _page.getPosts();
}

std::string Profile::getFriends()
{
	std::string result = "";
	UserNode* curr = NULL;
	curr = _userList.get_first();
	while (curr)
	{
		result += curr->get_data().getUserName() + ",";
		curr = curr->get_next();
	}
	result.pop_back();
	return result;
}

std::string Profile::getFriendsWithSameNameLength()
{
	std::string result = "";
	UserNode* curr = NULL;
	curr = _userList.get_first();
	while (curr)
	{
		if (curr->get_data().getUserName().length() == _owner.getUserName().length())
		{
			result += curr->get_data().getUserName();
			result += ",";
		}
		curr = curr->get_next();
	}
	result.pop_back();

	return result;
}
