#include<stdio.h>
#include<stdlib.h>

typedef struct typeNode {
    int  data;
    int rank;
    struct typeNode *next;
}Node;

void delete(Node **head,int x) {
    Node *previous = NULL;
    Node *targetNode = head;
    while(targetNode!=NULL && targetNode->data!=x){
        previous = targetNode;
        targetNode = targetNode->next;
    }
    if(targetNode==NULL) {
        printf("Element %d not present\n",x);
        return;
    }
    if(previous==NULL) {
        *head = (*head)->next;
    }
    else {
        previous->next = targetNode->next;
    }
    free (targetNode);
}

void search(Node *head,int x) {
    while(head!=NULL) {
        if(head->data==x) {
            printf("%d ",head->rank);
        }
        head = head->next;
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

void traverse(Node *head) {
    while(head!=NULL) {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    Node *head=NULL;
    int inp[100];
    int i=0; char temp;
    do {
        scanf("%d%c",&inp[i],&temp);
        i=i+1;
    }while(temp!='\n');
    int arr[i],k=0;
    for(int j=i-1;j>=0;j--) {
        arr[k++]=inp[j];
    }
    for(int i=0;i<k;i++) {
        insert(&head,arr[i],k-i);
    }
    traverse(head);
    int search2;
    scanf(" %d",&search2);
    search(head,search2);

    int delete1;
    scanf(" %d",&delete1);
    delete(&head,delete1);
    traverse(head);
}