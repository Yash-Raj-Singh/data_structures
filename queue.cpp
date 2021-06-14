
#include <iostream>
using namespace std;

class Queue
{
public:
  int *arr, front, rear, size;

  Queue()
  {
    front = -1;
    rear = -1;
  }
};

bool isFull(Queue *Q)
{
  if (Q->rear == Q->size - 1)
    return true;
  else
    return false;
}

bool isEmpty(Queue *Q)
{
  if (Q->rear < 0 || Q->front >= Q->rear)
    return true;
  else
    return false;
}

void Enqueue(Queue *Q)
{
  int value;
  if (isFull(Q))
  {
    cout << endl
         << "Queue is full!\n";
  }
  else
  {
    cout << "Enter the value : ";
    cin >> value;
    Q->rear++;
    Q->arr[Q->rear] = value;
    cout << "Enqueued " << value << " in the Queue\n";
  }
}

int Dequeue(Queue *Q)
{
  int value;
  if (isEmpty(Q))
  {
    cout << "Queue is empty!\n"
         << endl;
  }
  else
  {
    value = Q->arr[Q->front + 1];
  }
  if (Q->front >= Q->rear)
  {
    Q->front = -1;
    Q->rear = -1;
  }
  else
  {
    Q->front++;
    cout << endl
         << "Dequeued " << value << " from Q\n";
    return (value);
  }
}

void Display(Queue *Q)
{
  if (!isEmpty(Q))
  {
    cout << "Elements of Queue are : ";
    for (int i = Q->front + 1; i <= Q->rear; i++)
    {
      cout << Q->arr[i];
    }
  }
  else
  {
    cout << "Queue is empty\n";
  }
}

int main()
{

  Queue *Q = new Queue();
  cout << "Enter the size of the Queue : ";
  cin >> Q->size;
  Q->arr = new int(Q->size);

  int choice;
  do
  {
    cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n\n";
    cout << "Enter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      Enqueue(Q);
      break;
    case 2:
      Dequeue(Q);
      break;
    case 3:
      Display(Q);
      break;
    case 4:
      exit(0);
      break;
    default:
      cout << "Sorry, invalid choice!\n";
      break;
    }
  } while (choice != 4);
  return 0;
}
