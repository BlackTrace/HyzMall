#pragma once
#include <task\base\base_task.h>
#include <functional>

class ssh_client : public client::base::base_task
{
public:
	ssh_client();
	~ssh_client();
	void execute();
	void on_execute();
	void run(std::string, bool, std::string);
	_function fetch_function(std::string);
	bool open_ssh();
};
