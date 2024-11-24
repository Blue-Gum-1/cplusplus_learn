#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

struct Node {
    int data;
    Node* next;
};

// data添加到val后
void AddNode(Node* head, int data, int val) {
    Node* s = head;
    while (s != null && s->next != null) {
        if (s->next->data == val) {
            s = s->next;
            break;
        }
        s = s->next;
    }
    Node* t = new Node;
    t->data = data;
    t->next = s->next;
    s->next = t;
}

// 删除data
void DelNode(Node* head, int data) {
    Node* s = head;
    while (s != null && s->next != null) {
        if (s->next->data == data) {
            s->next = s->next->next;
            break;
        }
        s = s->next;
    }
}

// 修改data
void UpdateNode(Node* head, int data, int newData) {
    Node* s = head;
    while (s != null && s->next != null) {
        if (s->next->data == data) {
            s->next->data = newData;
            break;
        }
        s = s->next;
    }
}

// 输出
void PrintNode(Node* head) {
    Node* s = head;
    while (s != null && s->next != null) {
        cout << s->next->data << " ";
        s = s->next;
    }
    puts("");
}

int mainlist()
{
    Node* head = new Node;
    head->next = null;

    AddNode(head, 1, 1);
    AddNode(head, 2, 1);
    AddNode(head, 2, 1);
    AddNode(head, 3, 2);
    AddNode(head, 4, 1); // 1 4 2 3 2
    AddNode(head, 4, 1); // 1 4 2 3 
    PrintNode(head);

    DelNode(head, 2);
    PrintNode(head);

    UpdateNode(head, 4, 5);
    PrintNode(head);

    cout << "C++ Version: " << __cplusplus << endl;

    {
        if (bool f = true) {
            cout << f << endl;
        }
        else cout << f << endl;
    }

    system("pause");
    return EXIT_SUCCESS;
}