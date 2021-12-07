# Problem - Accessing Inherited Functions 

[Problem Link - HackerRank](https://www.hackerrank.com/challenges/accessing-inherited-functions/problem)
- Submission by [@itsanshulverma](https://github.com/itanshulverma)

---

You need to modify the class D and implement the function update_val which sets D's val to new_val by manipulating the value by only calling the func defined in classes A, B and C.

It is guaranteed that new_val has only  and  as its prime factors.

### Input Format

Implement class D's function update_val. This function should update D's val only by calling A, B and C's func.

### Constraints

1 <= new_val <= 10000

*Note: The new_val only has 2,3 and 5 as its prime factors.*

### Sample Input

`new_val = 30`

### Sample Output

```
A's func will be called once.
B's func will be called once.
C's func will be called once.
```

### Explanation

Initially, val = 1.

A's func is called once:
```cppp
val = val*2  
val = 2
```
B's func is called once:
```cpp
val = val*3
val = 6
```
C's func is called once:
```cpp
val = val*5
val = 30
```

# Solution

```cpp
class D : public A, public B, public C
{

  int val;

public:
  // Initially val is 1
  D()
  {
    val = 1;
  }

  // Implement this function
  void update_val(int new_val)
  {
    int n = new_val;
    while (n % 2 == 0)
    {
      n /= 2;
      A::func(val);
    }
    while (n % 3 == 0)
    {
      n /= 3;
      B::func(val);
    }
    while (n % 5 == 0)
    {
      n /= 5;
      C::func(val);
    }
  }
  // For Checking Purpose
  void check(int); // Do not delete this line.
};
```
