/*
* MIT License
* Copyright @kranthy.com@gmail.com
*/

/* Single linked list */
typedef struct single_list_t {
  int val;
  single_list_t *next;
} single_list_t;

/* Double linked list */
typedef struct double_list_t {
  int val;
  double_list_t *next;
  double_list_t *prev;
} double_list_t;

/* is Single list loop */
bool hasLoop(single_list_t *h)
{
  if (h == nullptr) return false;
  
  single_list_t *t = h;
  while (h != t) {
    h = h->next;
    t = t->next->next;
  }

  return (h == t);
}
