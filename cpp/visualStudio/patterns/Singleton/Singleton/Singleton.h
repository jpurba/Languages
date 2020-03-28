#pragma once
class Singleton
{
public:
	/* Static access method */
	static Singleton* getInstance();

private:
	/* Private constructor to prevent instancing*/
	Singleton() {}

	/* Here will be the instance stored */
	static Singleton* instance;
};

/* Null, because instance will be initialized on demand */
Singleton* Singleton::instance = 0;
