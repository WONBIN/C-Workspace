#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 이중 연결 리스트(Doubly Linked List)를 위한 구조체 정의
typedef struct editor
{
    char word;
    struct editor *next;
    struct editor *prev; // 이전 노드를 가리키는 포인터 추가
}editor;

// 새로운 노드를 생성하는 함수
editor *cnode(char c)
{
    editor *newText =(editor *)malloc(sizeof(editor));
    newText->word = c;
    newText->next = NULL;
    newText->prev = NULL; // prev 포인터 초기화
    return newText;
}

int main()
{
    char str[100001];
    scanf("%s", str);
    int N;
    scanf("%d",&N);

    // 1. 더미 노드를 생성하고 head로 지정합니다.
    editor * head = cnode('\0'); 
    editor * cursor = head; // 커서는 초기에 더미 노드를 가리킵니다.

    int len = strlen(str);
    // 2. 초기 문자열로 이중 연결 리스트를 만듭니다.
    for(int i=0; i<len; i++)
    {
        editor *newNode = cnode(str[i]);
        newNode->next = cursor->next; // 새 노드의 next는 항상 NULL
        newNode->prev = cursor;       // 새 노드의 prev는 현재 커서
        cursor->next = newNode;       // 현재 커서의 next를 새 노드로
        cursor = newNode;             // 커서를 새 노드로 이동
    }

    for(int i=0; i<N; i++)
    {
        char command;
        scanf(" %c",&command);

        if(command=='P')
        {
            char c;
            scanf(" %c",&c);
            editor *newNode = cnode(c);
            
            // 새 노드를 커서와 커서의 다음 노드 사이에 삽입
            newNode->next = cursor->next; // 
            newNode->prev = cursor;
            if (cursor->next != NULL) {
                cursor->next->prev = newNode;
                //double llinked list이므로 다음 노드의 prev노드도 바로 왔다갔다 가능함 .
                
            }
            cursor->next = newNode;
            cursor = newNode;
        }
        else if(command=='L')
        {
            // 커서가 더미 노드가 아닐 때만 왼쪽으로 이동 (O(1) 연산)
            if(cursor != head) {
                cursor = cursor->prev;
            }
        }
        else if(command=='D')
        {
            // 커서의 오른쪽에 노드가 있을 때만 이동 (O(1) 연산)
            if(cursor->next != NULL)
            {
                cursor = cursor->next;
            }
        }
        else if(command=='B')
        {
            // 커서가 더미 노드가 아닐 때만 삭제 가능 (O(1) 연산)
            if(cursor != head)
            {
                editor *nodeToDelete = cursor;
                cursor = nodeToDelete->prev; // 커서를 이전 노드로 이동
                cursor->next = nodeToDelete->next;
                if (nodeToDelete->next != NULL) {
                    nodeToDelete->next->prev = cursor;
                }
                free(nodeToDelete);
            }
        }
    }
    // 더미 노드의 다음 노드부터 끝까지 출력
    editor *cur = head->next;
    while(cur!=NULL)
    {
        printf("%c",cur->word);
        cur = cur->next;
    }
   return 0;
}