#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{

public:
	Stack(int szie);
	~Stack();
	bool stackEmpty();  //�ж�ջ��
	bool stackFull();  //�ж�ջ��
	void clearStack(); //q���ջ
	int stackLength(); //ջ�ĳ���
	bool push(T elemenet); //Ԫ����ջ
	bool pop(T &element); //Ԫ�س�ջ
	void stackTrave(bool  resverse); //����ջ��Ԫ��
private:
	T *m_pbuffer; //ջ��ָ��
	int m_iSize; //ջ������
	int m_iTop; //ջ��Ԫ�ظ���
	


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