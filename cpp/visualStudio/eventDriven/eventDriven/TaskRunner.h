#ifndef TASKRUNNER_H_
#define TASKRUNNER_H_

#include <iostream>
#include <vector>

#include "Task.h"

using namespace std;

class TaskRunner
{
	static vector<Task*> tasks;
	TaskRunner() {}  // Make it a Singleton
	TaskRunner& operator=(TaskRunner&);  // Disallowed
	TaskRunner(const TaskRunner&);  // Disallowed
	static TaskRunner tr;

public:
	static void add(Task& t) 
	{
		tasks.push_back(&t);
	}
	static void run()
	{
		vector<Task*>::iterator it = tasks.begin();
		while (it != tasks.end())
			(*it++)->operation();
	}
};

TaskRunner TaskRunner::tr;
vector<Task*> TaskRunner::tasks;

#endif // TASKRUNNER_H_