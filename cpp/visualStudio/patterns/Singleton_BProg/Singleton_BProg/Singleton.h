#ifndef __SINGLETON_H__
#define __SINGLETON_H__

class Singleton {
public:
	virtual ~Singleton(); // desturctor can be overridden

	static Singleton* theInstance();
	static void endOfProgram();

protected:
	Singleton();  // constructor

private:
	Singleton(const Singleton& other);
	static Singleton* _instance;
};

#endif // __SINGLETON_H__