#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//��������ջʵ��һ�����У�Ҳ����������ջģ�¶��еĲ���
stack<int> sta1;
stack<int> sta2;
template<typename T> 
void Mqueue_push(const T& val)
{
	sta1.push(val);
}
template<typename T>
//��ͷϷ��delete��,��β���ͷ��
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
	//�����if�г���˵��sta1���ˣ�sta2������ǿյĻ���˵��û�����ˣ�����ջ�ж�û��������
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
	//stack �� queue�ײ㶼����deque˫�˶���������ʵ�ֵģ�deque�ĵײ��Ƕ�̬�����Ķ�ά���飬һά�������ݣ���ά��С���䣬һ��Ϊ1024���ֽ�
	//que��staû�е���������Ϊ��������Ϊ�˱������������ģ���stack��queue��׼ȷ��˵���ǽ�������stack��queue�����ƽ϶�����ݽṹ����Ϊ�˽��ʵ������������ģ�����û��Ҫ�ṩ��������
	queue<int> que;
	stack<int> sta;
	return 0;
}