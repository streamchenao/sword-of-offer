#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//基于两个栈实现一个队列，也就是用两个栈模仿队列的操作
stack<int> sta1;
stack<int> sta2;
template<typename T> 
void Mqueue_push(const T& val)
{
	sta1.push(val);
}
template<typename T>
//重头戏在delete上,队尾入队头出
T& Mqueue_delete()
{
	if (sta2.empty())
	{
		while (!sta1.empty())
		{
			T& tmp = sta1.top();
			sta1.pop();
			sta2.push(tmp);
		}
	}
	//从这个if中出来说明sta1空了，sta2如果还是空的话就说明没数据了，两个栈中都没有数据了
	if (sta2.empty())
		throw new exception("queue is empty!!!");
	if (!sta2.empty())
	{
		T tmp = sta2.top();
		sta2.pop();
	}
	return tmp;
}


int main()
{
	//stack 和 queue底层都是由deque双端队列容器来实现的，deque的底层是动态增长的二维数组，一维数组扩容，二维大小不变，一般为1024个字节
	//que和sta没有迭代器，因为迭代器是为了遍历整个容器的，而stack和queue更准确的说法是近容器，stack和queue是限制较多的数据结构，是为了解决实际问题而诞生的，所以没必要提供迭代器。
	queue<int> que;
	stack<int> sta;
	return 0;
}