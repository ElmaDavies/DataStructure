#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{

public:
	Stack(int szie);
	~Stack();
	bool stackEmpty();  //判断栈空
	bool stackFull();  //判断栈满
	void clearStack(); //q清空栈
	int stackLength(); //栈的长度
	bool push(T elemenet); //元素入栈
	bool pop(T &element); //元素出栈
	void stackTrave(bool  resverse); //遍历栈中元素
private:
	T *m_pbuffer; //栈的指针
	int m_iSize; //栈的容量
	int m_iTop; //栈中元素个数
	


};
template <typename T>
Stack<T>::Stack(int size)
{

	m_iSize = size;
	m_pbuffer = new T[m_iSize];
	m_iTop = 0;
}
template <typename T>
Stack<T>::~Stack()
{
	delete []m_pbuffer;
	
}
template <typename T>
bool Stack<T>::stackEmpty()
{
	if(m_iTop==0)
	{
		return true;
	}
	return false;

}
template <typename T>
bool Stack<T>::stackFull()
{
	if(m_iSize==m_iTop)
	{
		return true;
	}else
	{

		return false;
	}
}
template <typename T>
int Stack<T>::stackLength()
{

	return m_iTop;
}
template<typename T>
void Stack<T>::clearStack()
{
	m_iTop = 0;
}


template <typename T>
bool Stack<T>::pop(T &element)
{
	if (stackEmpty())
	{
		return false;
	}
	m_iTop--;
	element = m_pbuffer[m_iTop];
}
template <typename T>
void Stack<T>::stackTrave(bool resverse)
{
	if(resverse==1)
	{
		for(int i=0;i<m_iTop;i++)
		{
			cout<<m_pbuffer[i];
		}
	}
	if (resverse==0)
	{
		for(int i=m_iTop-1;i>=0;i--)
		{

			cout<<m_pbuffer[i];
		}
	}

}
template <typename T>
bool Stack<T>::push(T element)
{
	if(stackFull())
	{
		return false;
	}

	m_pbuffer[m_iTop] = element;
	m_iTop++;
	return true;

}
#endif