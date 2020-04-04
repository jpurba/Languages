#ifndef __SINGLETON_H__
#define __SINGLETON_H__

class Singleton
{
public:
	virtual ~Singleton();
	static Singleton& theInstance();
	Singleton(const Singleton& other) = delete; // prevents clasic copy

protected:
	Singleton();

};
#endif //__SINGLETON_H__
