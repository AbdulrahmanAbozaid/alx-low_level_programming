#include "lists.h"

/**
 * find_listint_loop - fag
 * @head: fag
 *
 * Return: hshs
 */

listint_t *find_listint_loop(listint_t *head)
{
        listint_t *pn, *end;

        if (head == NULL)
                return (NULL);

        for (end = head->next; end != NULL; end = end->next)
        {
                if (end == end->next)
                        return (end);
                for (pn = head; pn != end; pn = pn->next)
                        if (pn == end->next)
                                return (end->next);
        }
        return (NULL);
}
