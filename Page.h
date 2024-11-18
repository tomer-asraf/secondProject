#pragma once
#include <string>

class Page
{
public: 
	void init();
	std::string getPosts();
	std::string getStatus();
	void clearPage();
	void setStatus(std::string status);
	void addLineToPosts(std::string newLine);

private:
	std::string _status;
	std::string _post;
};
