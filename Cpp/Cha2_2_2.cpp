// Find k-th to the last element in a singly linked list

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* construct(const vector<int>& v) {
    ListNode *head = 0;
    for (vector<int>::const_reverse_iterator it = v.rbegin(); it != v.rend(); ++it) {
        ListNode *node = new ListNode(*it);
        node->next = head;
        head = node;
    }
    return head;
}

// This solution is better to understand than recursive version
ListNode* kth_iter(ListNode* head, int k) {
    if (!head)
        return NULL;

    ListNode *p1, *p2;
    int n = k;

    for (p1 = p2 = head; --k; p2 = p2->next)
        ;

    while (p2->next) {
        p1 = p1->next;
        p2 = p2->next;
    }

    return p1;
}

// A little bit different than the version on book page 186
// I tried to make it easy to understand
ListNode* kth_recur(ListNode* head, int k, int& i) {
    if (!head)
        return NULL;

    ListNode *p = kth_recur(head->next, k, i);

    // if 'p' is not NULL, it must be the result, so just return it.
    if (p)
        return p;
    // if 'p' is NULL, then first we need to check if current head is the k-th element 
    // by checking if counter ('i+1') equals to 'k'
    else if (++i == k)
        return head;
    // if current node is not the k-th element, return NULL to indicate that result is not found
    else
        return NULL;
}


int main(int argc, char *argv[]) 
{
    vector<int> v = {1,2,3,4,5,6};
    ListNode *head = construct(v);
    // ListNode *kth = kth_iter(head, stoi(argv[1]));
    int i = 0;
    ListNode *kth = kth_recur(head, stoi(argv[1]), i);
    cout << kth->val << endl;
}