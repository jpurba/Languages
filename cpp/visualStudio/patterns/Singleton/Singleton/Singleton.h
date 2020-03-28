#pragma once
class Singleton
{
public:
	static Singleton* getInstance();

private:
	Singleton() {}
	static Singleton* instance;
};

Singleton* Singleton::instance = 0;
