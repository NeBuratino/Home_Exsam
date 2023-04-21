#include "task.h"

Task::Task(std::string name, int priority, std::string discription, time_t date)

{
	this->_name = name;
	this->_priority = priority;
	this->_date = date;
	this->_discription = discription;
}
