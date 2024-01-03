
class Solution
{
public:
    void insert_any_Position(ListNode *head)
    {
        ListNode *newNode = new ListNode(0);
        ListNode *tmp = head;

        while (tmp != NULL)
        {
            newNode->next = tmp->next;
            tmp->next = newNode;
            tmp = newNode->next;
        }
    }
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *NewHead = NULL;
        int sum = 0;
        ListNode *tmp = head->next;
        while (tmp != 0)
        {
            if (tmp->val == 0)
            {
                insert_any_Position(head);

                sum = 0;
            }

            else
            {
                sum = sum + tmp->val;
            }
            tmp = tmp->next;
        }
        return NewHead;
    }
};