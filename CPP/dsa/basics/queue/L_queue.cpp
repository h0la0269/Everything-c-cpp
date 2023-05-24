#include <iostream>
using namespace std;
#define size 30
class queue{
	private:
		int item[size],front,rear;
	public:
		queue(){
			front = rear = -1;
		}

		bool isEmpty(){
			if(front == rear == -1)
				return true;
			else return false;
		}
		
		bool isFull (){
			if(front == rear == size-1)
				return true;
			else return false;
		}

		void enQueue(int data){
			if(isFull())
				cout << "Queue is full";
			else {
				if(front == -1)
					front ++;
				rear++;
				item[rear]= data;
			}
		}

		int deQueue(){
			int deletedItem;
			if(isEmpty())
				cout << "Queue is empty";
			else {
				deletedItem = item[front];
				if(front >= rear){
					front = rear = -1;
				}
				else{
					front++;
				}
			}
			return deletedItem;
		}

		void display(){
			cout << "The front index is " << front << endl;
			if(isEmpty())
				cout << "The queue is empty";
			else{
				for (int i = front ;i <=rear;i++)
					cout << "The elements of the queue is " << item[i] << endl;
			}
			cout << "The rear index is "<< rear << endl;
		}
};

int main(){
	queue q;
	for (int i = 0; i<10;i++)
		q.enQueue(i);
	cout << "The deleted item is "<< q.deQueue() << endl;
	cout << "The deleted item is "<< q.deQueue() << endl;
	cout << "The deleted item is "<< q.deQueue() << endl;
	q.enQueue(8);
	cout << "The deleted item is "<< q.deQueue() << endl;
	cout << "The deleted item is "<< q.deQueue() << endl;
	q.display();
	cout << "The deleted item is "<< q.deQueue() << endl;
	return 0;
}