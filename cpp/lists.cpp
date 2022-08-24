/*
* MIT License
* Copyright @kranthy.com@gmail.com
*/

/* node, as double linked list */
typedef struct {
  int val;
  struct node_t *next = nullptr;
  struct node_t *prev = nullptr;
} node_t;

/* is Single list loop */
bool hasLoop(node_t *h)
{
  if (h == nullptr) return false;
    
  node_t *t = h;
  do {
    h = h->next;
    t = t->next;
    if (t) t = t->next;
  } while (h != t);

  return (h != nullptr);
}

int main()
{
  node_t *t = malloc(node_t);
  t->val = 1;
  t->next = malloc(node_t);
  t->next->next = t;

  hasLoop(t);
}
