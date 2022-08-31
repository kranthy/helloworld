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

/* Convert the given roman number to integer */
int romanToInteger(string s) {
    int mRoman[26] = {0};
    mRoman['I'-'A'] = 1;
    mRoman['V'-'A'] = 5;
    mRoman['X'-'A'] = 10;
    mRoman['L'-'A'] = 50;
    mRoman['C'-'A'] = 100;
    mRoman['D'-'A'] = 500;
    mRoman['M'-'A'] = 1000;
    int res = 0;
    int i = 0;

    for (i = 0; i < s.size()-1; i++) {
        int a = mRoman[s[i]-'A'];
        int b = mRoman[s[i+1]-'A'];

        if (b <= a) {
            res += a;
        } else {
            res -= a;
        }
    }
    res += mRoman[s[i]-'A'];

    return res;
};
