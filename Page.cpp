#include "Page.h"

void Page::init()
{
	_status = "";
	_post = "";
}

std::string Page::getPosts()
{
	return _post;
}

std::string Page::getStatus()
{
	return _status;
}

void Page::clearPage()
{
	_post = "";
}

void Page::setStatus(std::string status)
{
	_status = status;
}

void Page::addLineToPosts(std::string newLine)
{
	_post += "\n";
	_post += newLine;
}

