#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
    {
        printf("Queue is Full\n");
    }
    else
    {
        if (front == -1)  
        {
            front = rear = 0;
        }
        else if (rear == SIZE - 1)
        {
            rear = 0;   
        }
        else
        {
            rear++;
        }
        queue[rear] = value;
        printf("Inserted: %d\n", value);
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Deleted: %d\n", queue[front]);

        if (front == rear)   
        {
            front = rear = -1;
        }
        else if (front == SIZE - 1)
        {
            front = 0;   
        }

        else
        {
            front++;
        }
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements are:\n");

        if (front <= rear)
        {
            for (i = front; i <= rear; i++)
                printf("%d ", queue[i]);
        }
        else
        {
            for (i = front; i < SIZE; i++)
                printf("%d ", queue[i]);

            for (i = 0; i <= rear; i++)
                printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- Circular Queue ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}


