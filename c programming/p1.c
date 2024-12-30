#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float percentage;
};

void display(struct Student *stu);

int main() {
    struct Student s[5];
    strcpy(s[0].name, "Arunkumar"); 
    s[0].age = 25;
    s[0].percentage = 66.6;

    display(s);
    
    printf("Name in main function: %s\n", s[0].name);

    return 0;
}

void display(struct Student *stu) { 
    strcpy(stu[0].name, "Gopu");
    printf("Name in display function: %s\n", stu[0].name);
}

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float percentage;
};

struct Student creatstructure()
{
    struct Student temp = {"Arunkumar",25,77.7};
    return temp;
}

int main()
{
    struct Student s;
    s = creatstructure();
    printf("The name is %s age is %d",s.name,s.age);
    return 0;

}


#include <stdio.h>
#include <stdlib.h> // Include for malloc and free
#include <string.h>

struct Student {
    char name[50];
    int age;
    float percentage;
};

struct Student *createStructure() { 
    struct Student *temp = (struct Student*)malloc(sizeof(struct Student));
    if (temp == NULL) { 
        printf("Memory allocation failed\n");
        exit(1);
    }
    strcpy(temp->name, "Arunkumar");
    temp->age = 23;
    temp->percentage = 45.5;
    return temp;
}

int main() {
    struct Student *s;
    s = createStructure();
    printf("The name is %s\n", s->name);
    free(s); 
    return 0;
}



#include <stdio.h>
#include <string.h>

union Value {
    int i;
    float f;
    char c;
};

int main() {
    union Value v;


    v.i = 42; 
    printf("Integer: %d\n", v.i);


    v.f = 3.14;
    printf("Float: %f\n", v.f);


    v.c = 'A';
    printf("Character: %c\n", v.c);

    return 0;
}


#include <stdio.h> 
// Define the structure for a student 
struct Student  
{ 
    int studentID; 
    char name[50]; 
    char grade; 
    float marks[5]; 
    float averageMarks; 
}; 
// Function to calculate the average marks for a student 
void calculateAverage(struct Student *student)  
{ 
float totalMarks = 0.0; 
for (int i = 0; i < 5; i++)  
{ 
totalMarks += student->marks[i]; 
} 
student->averageMarks = totalMarks / 5; 
} 
// Function to assign grades based on average marks 
void assignGrades(struct Student *student)  
{ 
if (student->averageMarks >= 90)  
{   student->grade = 'A'; 
    }  
    else if (student->averageMarks >= 80)  
    { 
        student->grade = 'B'; 
    }  
    else if (student->averageMarks >= 70)  
    { 
        student->grade = 'C'; 
    }  
    else if (student->averageMarks >= 60)  
    { 
        student->grade = 'D'; 
    }  
    else  
    { 
        student->grade = 'F'; 
    } 
} 
 
int main()  
{ 
    struct Student students[5]; 
 
    // Input student information 
    for (int i = 0; i < 5; i++)  
    { 
        printf("Enter Student ID: "); 
        scanf("%d", &students[i].studentID); 
        printf("Enter Name: "); 
        scanf("%s", students[i].name); 
 
        printf("Enter marks for 5 subjects:\n"); 
        for (int j = 0; j < 5; j++) { 
            printf("Subject %d: ", j + 1); 
            scanf("%f", &students[i].marks[j]); 
        } 
 
        // Calculate average marks and assign grades 
        calculateAverage(&students[i]); 
        assignGrades(&students[i]); 
    } 
 
    // Display student information 
    printf("\nStudent Information:\n"); 
    for (int i = 0; i < 5; i++)  
    { 
        printf("Student ID: %d\n", students[i].studentID);
        printf("Name: %s\n", students[i].name); 
        printf("Average Marks: %.2f\n", students[i].averageMarks); 
        printf("Grade: %c\n", students[i].grade); 
        printf("\n"); 
    }    
    return 0; 
} 


#include <stdio.h> 
// Define the structure for a student 
struct Student  
{ 
    int studentID; 
    char name[50]; 
    char grade; 
    float marks[5]; 
    float averageMarks;
};  
// Function to calculate the average marks for a student 
void calculateAverage(struct Student *student)  
{ 
float totalMarks = 0.0; 
for (int i = 0; i < 5; i++)  
{ 
totalMarks += student->marks[i]; 
} 
student->averageMarks = totalMarks / 5; 
} 
// Function to assign grades based on average marks 
void assignGrades(struct Student *student)  
{ 
if (student->averageMarks >= 90)
  { 
        student->grade = 'A'; 
    }  
    else if (student->averageMarks >= 80)  
    { 
        student->grade = 'B'; 
    }  
    else if (student->averageMarks >= 70)  
    { 
        student->grade = 'C'; 
    }  
    else if (student->averageMarks >= 60)  
    { 
        student->grade = 'D'; 
    }  
    else  
    { 
        student->grade = 'F'; 
    } 
} 
 
int main()  
{ 
    struct Student students[5]; 
    struct Student *studentPtr = students; 
 
    // Input student information 
    for (int i = 0; i < 5; i++)  
    { 
        printf("Enter Student ID: "); 
        scanf("%d", &studentPtr->studentID); 
        printf("Enter Name: "); 
        scanf("%s", studentPtr->name); 
 
        printf("Enter marks for 5 subjects:\n"); 
        for (int j = 0; j < 5; j++)  
        { 
            printf("Subject %d: ", j + 1); 
            scanf("%f", &studentPtr->marks[j]); 
        } 
 
        // Calculate average marks and assign grades 
        calculateAverage(studentPtr); 
        assignGrades(studentPtr); 
 
        // Move to the next student in the array 
        studentPtr++; 
    }
    // Reset the pointer to the beginning of the array 
studentPtr = students; 
// Display student information 
printf("\nStudent Information:\n"); 
for (int i = 0; i < 5; i++)  
{ 
printf("Student ID: %d\n", studentPtr->studentID); 
printf("Name: %s\n", studentPtr->name); 
printf("Average Marks: %.2f\n", studentPtr->averageMarks); 
printf("Grade: %c\n", studentPtr->grade); 
printf("\n"); 
// Move to the next student in the array 
studentPtr++; 
} 
return 0; 
} 




#include<stdio.h>
int *array()
{
    int B[]={1,2,3,4,5};
    return B;
}

void main()
{
    int*A;
    A=array();
    for (int i = 0;i<4;i++)
        printf("%d\t",A[i]);
    
}




#include <stdio.h> 
#include <stdlib.h> 

struct Node { 
int data; 
struct Node* next; 
}; 

struct Stack { 
struct Node* top; 
}; 

struct Stack* createStack() { 
struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
stack->top = NULL; 
return stack; 
} 

int isEmpty(struct Stack* stack) { 
return (stack->top == NULL); 
} 

void push(struct Stack* stack, int data) { 
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
newNode->data = data; 
newNode->next = stack->top; 
stack->top = newNode; 
printf("%d pushed to the stack\n", data); 
} 

int pop(struct Stack* stack) { 
if (isEmpty(stack)) { 
printf("Stack is empty. Cannot pop.\n"); 
return -1;
} 
struct Node* temp = stack->top; 
int poppedData = temp->data; 
stack->top = temp->next; 
free(temp); 
return poppedData; 
} 
int main() { 
struct Stack* stack = createStack(); 
push(stack, 10); 
push(stack, 20); 
push(stack, 30); 
printf("%d popped from the stack\n", pop(stack)); 
printf("%d popped from the stack\n", pop(stack)); 
printf("%d popped from the stack\n", pop(stack)); 
printf("%d popped from the stack\n", pop(stack));
return 0; 
} 

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insert(int rawdata)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node*));
    newnode->data=rawdata;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct Node* temp = head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display()
{
        if(head==NULL)
        {
            printf("the linked list is empty");
        }
        else
        {
            struct Node* temp=head;
            while(temp!=NULL)
            {
                printf("%d\n",temp->data);
                printf("%x\n",temp->next);
                temp=temp->next;
            }
        }
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display();
}


#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* link;
};

struct Node*del_first(struct Node* head)
{
    if(head==NULL)
    {
        printf("the list is already empty!");
    }
    else
    {
        struct Node* temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
}
int main()
{
    head=del_first(head);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
    }
    return 0;
}


#include <stdio.h> 
#include <stdlib.h> 

struct Customer  
{ 
char name[50]; 
int age; 
int numTickets; 
struct Customer* next; 
}; 

struct Queue  
{ 
struct Customer* front; 
struct Customer* rear; 
};
struct Queue* createQueue()  
{ 
struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue)); 
queue->front = queue->rear = NULL; 
return queue; 
} 
 
int isEmpty(struct Queue* queue)  
{ 
return (queue->front == NULL); 
} 

void enqueue(struct Queue* queue, struct Customer customer)  
{ 
struct Customer* newNode = (struct Customer*)malloc(sizeof(struct Customer)); 
*newNode = customer;  
 newNode->next = NULL; 
 
    if (isEmpty(queue)) { 
        queue->front = queue->rear = newNode; 
    } else { 
        queue->rear->next = newNode; 
        queue->rear = newNode; 
    } 
} 
 

struct Customer dequeue(struct Queue* queue)  
{ 
    struct Customer emptyCustomer = {"", 0, 0, NULL}; 
 
    if (isEmpty(queue))  
    { 
        return emptyCustomer; 
    } 
 
    struct Customer* temp = queue->front; 
    struct Customer customer = *temp; 
    queue->front = queue->front->next; 
 
    free(temp); 
    return customer; 
} 
 
 
int main()  
{ 

    int totalTickets = 100;  
    struct Queue* ticketQueue = createQueue(); 
 
    while (totalTickets > 0)  
    { 
        struct Customer customer; 
        printf("Enter customer name: "); 
        scanf("%s", customer.name); 
        printf("Enter customer age: "); 
        scanf("%d", &customer.age); 
        printf("Enter number of tickets needed: "); 
        scanf("%d", &customer.numTickets); 
 
        if (customer.numTickets <= totalTickets)  
        { 
            totalTickets -= customer.numTickets; 
            enqueue(ticketQueue, customer); 
            printf("Tickets sold to %s (%d tickets remaining)\n", customer.name, totalTickets); 
            }  
        else  
        { 
            printf("Insufficient tickets available. Tickets not sold to %s\n", customer.name); 
        } 
 
        printf("Do you want to add another customer? (1 for yes, 0 for no): "); 
        int choice; 
        scanf("%d", &choice); 
        if (choice != 1)  
        { 
            break; 
        } 
    } 
 
    printf("Houseful! All tickets are sold.\n"); 
 
    return 0; 
} 



#include <stdio.h> 
#include <stdlib.h> 


struct Node { 
int data; 
struct Node* next; 
}; 

struct Node* insertAtBeginning(struct Node* head, int value) { 
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
if (newNode == NULL) { 
printf("Memory allocation failed.\n"); 
return head; 
} 
newNode->data = value; 
newNode->next = head; 
return newNode; 
} 

struct Node* insertAtEnd(struct Node* head, int value) { 
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
if (newNode == NULL) { 
printf("Memory allocation failed.\n"); 
return head; 
} 
newNode->data = value; 
newNode->next = NULL; 
if (head == NULL) { 
return newNode; 
} 
struct Node* current = head; 
while (current->next != NULL) { 
current = current->next; 
} 
current->next = newNode; 
return head; 
} 

struct Node* deleteByValue(struct Node* head, int value) { 
if (head == NULL) { 
printf("List is empty. Cannot delete.\n"); 
return head; 
} 
if (head->data == value) { 
struct Node* temp = head; 
head = head->next; 
free(temp); 
return head; 
} 
struct Node* current = head; 
while (current->next != NULL && current->next->data != value) { 
current = current->next; 
} 
if (current->next == NULL) { 
printf("Value not found in the list. Cannot delete.\n"); 
return head; 
} 
struct Node* temp = current->next; 
current->next = current->next->next; 
free(temp); 
return head; 
} 

void displayList(struct Node* head) { 
        printf("Linked List: "); 
    struct Node* current = head; 
    while (current != NULL) { 
        printf("%d -> ", current->data); 
        current = current->next; 
    } 
    printf("NULL\n"); 
} 
 
int main() { 
    struct Node* head = NULL; 
    int choice, value; 
 
    while (1) { 
        printf("\nMenu:\n"); 
        printf("1. Insert at the beginning\n"); 
        printf("2. Insert at the end\n"); 
        printf("3. Delete by value\n"); 
        printf("4. Display\n"); 
        printf("5. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) { 
            case 1: 
                printf("Enter a value to insert: "); 
                scanf("%d", &value); 
                head = insertAtBeginning(head, value); 
                break; 
            case 2: 
                printf("Enter a value to insert: "); 
                scanf("%d", &value); 
                head = insertAtEnd(head, value); 
                break; 
            case 3: 
                printf("Enter a value to delete: "); 
                scanf("%d", &value); 
                head = deleteByValue(head, value); 
                break; 
            case 4: 
                displayList(head); 
                break; 
            case 5: 
                
                while (head != NULL) { 
                    struct Node* temp = head; 
                    head = head->next; 
                    free(temp); 
                } 
                return 0; 
default: 
printf("Invalid choice. Please try again.\n"); 
} 
} 
return 0; 
} 



 #include <stdio.h>
 #include <stdlib.h>
 
 typedef struct Node {
 int data;
 struct Node* link;
 } Node;
 
 Node* createNode(int item) {
 Node* newNode = (Node*) malloc(sizeof(Node));
 if (newNode == NULL) {
 printf("Memory not available\n");
 return NULL;
 }
 newNode->data = item;
 newNode->link = NULL;
 return newNode;
 }
  void create(Node** head, int item) {
 Node* newNode = createNode(item);
 if (*head == NULL) {
 *head = newNode;
 } else {
 Node* temp = *head;
 while (temp->link != NULL) {
 temp = temp->link;
 }
 temp->link = newNode;
 }
 }
 int main() {
 Node* head = NULL;
 create(&head, 1);  
create(&head, 2);  
create(&head, 3);

 Node* temp = head;
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->link;
    }
 }


#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void deleteStart(Node **head) {
    Node *temp = *head;

    if (*head == NULL) {
        printf("Linked List Empty, nothing to delete\n");
        return;
    }

    *head = (*head)->next;
    free(temp);
}

void deleteEnd(Node **head) {
    Node *temp = *head;
    Node *previous = NULL;

    if (*head == NULL) {
        printf("Linked List Empty, nothing to delete\n");
        return;
    }

    if (temp->next == NULL) { 
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next != NULL) {
        previous = temp;
        temp = temp->next;
    }

    previous->next = NULL;
    free(temp);
}
int main() {
    Node *head = NULL;

    
    head = (Node *)malloc(sizeof(Node));
    head->data = 1;
    head->next = (Node *)malloc(sizeof(Node));
    head->next->data = 2;
    head->next->next = NULL;

    printf("Deleting start:\n");
    deleteStart(&head);

    printf("Deleting end:\n");
    deleteEnd(&head);

    return 0;
}


#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*pre;
    struct Node*next;
};
void doubly_Traverse(struct Node*ptr)
{
    while(ptr!=NULL){
            printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node* insert_At_Begain(struct Node*head,int data)
{
    struct Node*p=(struct Node*)malloc(sizeof(struct Node));
    p->data=data;
    p->pre=NULL;
    p->next=head;
    return p;
};

struct Node* insert_At_Index(struct Node*head,int data,int index)
{
    struct Node*r=head->next;
    struct Node*p=(struct Node*)malloc(sizeof(struct Node));
    struct Node*q=head;
    p->data=data;
    int i=1;
    while(i!=index-1)
    {
        q=q->next;
        r=r->next;
        i++;
    }
    p->next=r;
    r->pre=p;
    q->next=p;
    p->pre=q;
    return head;
};
struct Node* insert_At_End(struct Node*head,int data)
{
    struct Node*q=head;
    struct Node*p=(struct Node*)malloc(sizeof(struct Node));
    p->data=data;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    q->next=p;
    p->pre=q;
    p->next=NULL;
    return head;
};

struct Node* delete_At_Begain(struct Node*head)
{
    struct Node*q=head;
    head=head->next;
    free(q);
    return head;
};
struct Node*delete_At_Index(struct Node*head,int index)
{
    struct Node*p=head;
    struct Node*q=head->next;

    int i=1;
    while(i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    return head;
};

struct Node*delete_At_End(struct Node *head)
{
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next!=NULL)
    {
        q=q->next;
        p=p->next;
    }
    p->next=NULL;
    free(q);
    return head;
};
int main()
{
    int d1,d2,n,d3;
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*n2=(struct Node*)malloc(sizeof(struct Node));
    struct Node*n3=(struct Node*)malloc(sizeof(struct Node));
    struct Node*n4=(struct Node*)malloc(sizeof(struct Node));
    struct Node*n5=(struct Node*)malloc(sizeof(struct Node));

    head->pre=NULL;
    head->data=10;
    head->next=n2;

    n2->pre=head;
    n2->data=20;
    n2->next=n3;

    n3->pre=n2;
    n3->data=30;
    n3->next=n4;

    n4->pre=n3;
    n4->data=40;
    n4->next=n5;

    n5->pre=n4;
    n5->data=50;
    n5->next=NULL;

    doubly_Traverse(head);

    printf("\n\nEnter The data for the first Node:");
    scanf("%d",&d1);
    head=insert_At_Begain(head,d1);
    doubly_Traverse(head);

    printf("\n\nEnter the index :");
    scanf("%d",&n);
    printf("Enter the data for new Node:");
    scanf("%d",&d2);
    head=insert_At_Index(head,d2,n);
    doubly_Traverse(head);

    printf("\n\nEnter The data for the first Node:");
    scanf("%d",&d3);
    head=insert_At_End(head,d3);
    doubly_Traverse(head);

    printf("\n\nAfter Deleting First Node\n");
    head=delete_At_Begain(head);
    doubly_Traverse(head);

    int i;
    printf("\n\nEnter the Index:");
    scanf("%d",&i);
    printf("After Deleting Index Node:\n");
    head=delete_At_Index(head,i);
    doubly_Traverse(head);

    printf("\n\nAfter Deleting Last Node\n");
    head=delete_At_End(head);
    doubly_Traverse(head);
}



