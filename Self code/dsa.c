//  1. Linear Search in Array
// #include <stdio.h>

// int main() {
//     int arr[100], n, i, key, found = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter array elements: ");
//     for (i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     printf("Enter element to search: ");
//     scanf("%d", &key);

//     for (i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             printf("Element found at position %d\n", i + 1);
//             found = 1;
//             break;
//         }
//     }

//     if (!found)
//         printf("Element not found.\n");

//     return 0;
// }

// 2. Binary Search in Array
// #include <stdio.h>

// int main() {
//     int arr[100], n, i, key, low, high, mid;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter sorted array elements: ");
//     for (i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     printf("Enter element to search: ");
//     scanf("%d", &key);

//     low = 0;
//     high = n - 1;

//     while (low <= high) {
//         mid = (low + high) / 2;

//         if (arr[mid] == key) {
//             printf("Element found at position %d\n", mid + 1);
//             return 0;
//         } else if (arr[mid] < key)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }

//     printf("Element not found.\n");
//     return 0;
// }

// 3. Bubble Sort
// #include <stdio.h>

// int main() {
//     int arr[100], n, i, j, temp;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter array elements: ");
//     for (i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Sorted array: ");
//     for (i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");

//     return 0;
// }

// 4. Stack Implementation using Array
// #include <stdio.h>
// #define MAX 5

// int stack[MAX], top = -1;

// void push(int val) {
//     if (top == MAX - 1)
//         printf("Stack Overflow\n");
//     else
//         stack[++top] = val;
// }

// void pop() {
//     if (top == -1)
//         printf("Stack Underflow\n");
//     else
//         printf("Popped element: %d\n", stack[top--]);
// }

// void display() {
//     int i;
//     if (top == -1)
//         printf("Stack is empty\n");
//     else {
//         printf("Stack elements: ");
//         for (i = 0; i <= top; i++)
//             printf("%d ", stack[i]);
//         printf("\n");
//     }
// }

// int main() {
//     push(10);
//     push(20);
//     push(30);
//     display();
//     pop();
//     display();
//     return 0;
// }


// 5. Queue Implementation using Array
// #include <stdio.h>
// #define MAX 5

// int queue[MAX], front = -1, rear = -1;

// void enqueue(int val) {
//     if (rear == MAX - 1)
//         printf("Queue Overflow\n");
//     else {
//         if (front == -1) front = 0;
//         queue[++rear] = val;
//     }
// }

// void dequeue() {
//     if (front == -1 || front > rear)
//         printf("Queue Underflow\n");
//     else
//         printf("Dequeued element: %d\n", queue[front++]);
// }

// void display() {
//     int i;
//     if (front == -1 || front > rear)
//         printf("Queue is empty\n");
//     else {
//         printf("Queue elements: ");
//         for (i = front; i <= rear; i++)
//             printf("%d ", queue[i]);
//         printf("\n");
//     }
// }

// int main() {
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);
//     display();
//     dequeue();
//     display();
//     return 0;
// }