#pragma once


#include <string>

class Task
{
private:
	/// <summary>
	/// �������� ������
	/// </summary>
	std::string _name;

	int _priority;
	/// <summary>
	/// ��������� ������
	/// </summary>
	std:: string _discription;
	/// <summary>
	/// �������� ������
	/// </summary>
	time_t _date;
	/// <summary>
	/// ���� � ����� ������
	/// </summary>



public:
	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="name">�������� ������</param>
	/// <param name="priority">���������</param>
	/// <param name="discription">��������</param>
	/// <param name="date">���� � �����</param>
	Task(std::string name, int priority, std::string discription, time_t date);

};

