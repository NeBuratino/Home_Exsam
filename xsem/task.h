#pragma once


#include <string>

class Task
{
private:
	/// <summary>
	/// Название задачи
	/// </summary>
	std::string _name;

	int _priority;
	/// <summary>
	/// Приоритет задачи
	/// </summary>
	std:: string _discription;
	/// <summary>
	/// Описание задачи
	/// </summary>
	time_t _date;
	/// <summary>
	/// Дата и время задачи
	/// </summary>



public:
	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="name">Название задачи</param>
	/// <param name="priority">Параметры</param>
	/// <param name="discription">Описание</param>
	/// <param name="date">Дата и время</param>
	Task(std::string name, int priority, std::string discription, time_t date);

};

