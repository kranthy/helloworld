/*
* MIT License
* Copyright @kranthy.com@gmail.com
*/

/* No of 1s in given number */
int no_of_1s(int val)
{
  int num = 0;
  
  while (val) {
    val = val & (val-1);
    num++;
  }
  
  return num;
}

/* No of 0s in given number */
int no_of_0s(int val)
{
  return (sizeof(val) * 8 - no_of_1s(val)); 
}

/* is Power of 2 */
bool isPowOf2(int val)
{
  return ((val & (val-1)) == 0); 
}

