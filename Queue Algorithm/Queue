#include <iostream>
using namespace std;

class queueType
{
	public:
		bool isEmptyQueue() const;
		bool isFullQueue() const;
		void initializeQueue();
		void destroyQueue();
		int front() const;
		int back() const;
		void addQueue(char queueElement);
		void deleteQueue();
		int getCount();
		queueType(int queueSize = 100);
		~queueType();
		
	private:
		int maxQueueSize;
		int count;
		int queueFront;
		int queueRear;
		int *list;
};

void queueType::initializeQueue()
{
	queueFront = 0;
	queueRear = maxQueueSize - 1;
	count = 0;
}

void queueType::destroyQueue()
{
	queueFront = 0;
	queueRear = maxQueueSize - 1;
	count = 0;
}

bool queueType::isEmptyQueue() const
{
	return (count == 0);
}

bool queueType::isFullQueue() const
{
	return (count == maxQueueSize);
}

void queueType::addQueue(char newElement)
{
	if (!isFullQueue())
	{
		queueRear = (queueRear + 1) % maxQueueSize;
		count++;
		list[queueRear] = newElement;
	}
	else
		cout<<"Cannot add to a full queue."<<endl;
}

int queueType::front() const
{
	return list[queueFront];
}

int queueType::back() const
{
	return list[queueRear];
}

void queueType::deleteQueue()
{
	if (!isEmptyQueue())
	{
		count--;
		queueFront = (queueFront + 1) % maxQueueSize;
	}
	else
		cout<<"Cannot remove from an empty queue"<<endl;
}

int queueType::getCount()
{
	return count;
}

queueType::queueType(int queueSize)
{
	if (queueSize <= 0)
	{
		cout<<"Size of the array to hold the queue must be positive."<<endl;
		cout<<"Creating an array of size 100."<<endl;
		maxQueueSize = 100;
	}
	else
		maxQueueSize = queueSize;
		
	queueFront = 0;
	queueRear = maxQueueSize - 1;
	count = 0;
	list = new int[maxQueueSize];
}

queueType::~queueType()
{
	delete [] list;
}

int main()
{
	queueType clinic(100);
	
	clinic.addQueue('A');
	clinic.addQueue('B');
	clinic.addQueue('C');
	clinic.deleteQueue();
	clinic.deleteQueue();
	clinic.addQueue('D');
	clinic.addQueue('E');
	clinic.deleteQueue();
	
	cout<<"Next patient is "<<clinic.front();
	cout<<endl;
	cout<<"Remaining total patient "<<clinic.getCount();
	
}
