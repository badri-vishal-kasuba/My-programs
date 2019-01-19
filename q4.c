#include<stdio.h>
#include<stdlib.h>

typedef struct typeNode {
    int data;
    int rank;
    struct typeNode *next;
    struct typeNode *prev;
}Node;

void traverse(Node *head) {
    while(head!=NULL) {
        printf("%d ",head->data);
        head= head->next;
    }
    printf("\n");
}

void insert(Node **head,int x,int y) {
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = x;
    temp->rank = y;
    temp->next = *head;
    *head = temp;
}

void insert2(Node **head,int x,int y) {
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = x;
    temp->rank = y;
    temp->next = *head;
    if(head!=NULL) {
        temp->prev = NULL;
    }
    else {
        Node *lastNode = *head;
        while(lastNode!=NULL) {
            lastNode = lastNode->prev;
        }
        temp->prev = lastNode;
    }
    *head = temp;
}

int main() {
    Node *head = NULL;
    printf("Enter the type of linked list(single/double/circular) : ");
    char type[20];
    scanf("%[^\n]%*c",type);
    printf("%s",type);
    int inp[100];
    for(int i=0;i<100;i++) { inp[i]=-1;}
    int i=0; char temp;
    do {
        scanf("%d%c",&inp[i],&temp);
        i=i+1;
    }while(temp!='\n');
    
    int arr[i];
    int k=0;
    for(int i=0;i<100;i++) {
         if(inp[i]==-1) {break;}
         arr[k++]=inp[i];
    }
    if(type[0]=='d'){
      for(int i=0;i<k;i++) {
            insert2(&head,arr[i],k-i);
        }  
    }
    else {
        for(int i=0;i<k;i++) {
            insert(&head,arr[i],k-i);
        }
    }
   traverse(head);
    int y;
    scanf(" %d",&y);
    while(head!=NULL) {
        if(head->rank==y) {printf("%d",head->data);}
        head = head->next;
    }
}