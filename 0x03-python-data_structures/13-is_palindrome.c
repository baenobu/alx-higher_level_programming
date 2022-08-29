#include "lists.h"

int palindrome(listint_t **l, listint_t *r)
{
    int response;

    if (r != NULL)
    {
        response = palindrome(l, r->next);
        if (response != 0)
        {
            response = (r->n == (*l)->n);
            *l = (*l)->next;
            return (response);
        }
        return (0);
    }
    return (1);
}

int is_palindrome(listint_t **head)
{
    if (head == NULL)
    {
        return (0);
    }
    return (palindrome(head, *head));
}