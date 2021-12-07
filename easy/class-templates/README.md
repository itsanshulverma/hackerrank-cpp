# Class Templates Problem

[Problem Link - HackerRank](https://www.hackerrank.com/challenges/c-class-templates/problem)
- Submission by [@itsanshulverma](https://github.com/itanshulverma)

## Problem Statement

 A class template provides a specification for generating classes based on parameters.  _Class templates_  are generally used to implement containers. A class template is instantiated by passing a given set of types to it as template arguments. Here is an example of a class, MyTemplate, that can store one element of any type and that has just one member function  _divideBy2_, which divides its value by 2.

```cpp
template <class T>
class MyTemplate {
T element;
public:
MyTemplate (T arg) {element=arg;}
T divideBy2 () {return element/2;}
};
```

It is also possible to define a different implementation of a template for a specific type. This is called  _Template Specialization_. For the template given above, we find that a different implementation for type  _char_  will be more useful, so we write a function  _printElement_  to print the  _char_  element:

```cpp
// class template specialization:
template <>
class MyTemplate <char> {
char element;
public:
MyTemplate (char arg) {element=arg;}
char printElement ()
{
return element;
}
};
```

You are given a main() function which takes a set of inputs. The type of input governs the kind of operation to be performed, i.e. concatenation for  _strings_  and addition for  _int_  or  _float_. You need to write the class template  _AddElements_  which has a function  _add()_  for giving the sum of  _int_  or  _float_  elements. You also need to write a template specialization for the type  _string_  with a function  _concatenate()_  to concatenate the second string to the first string.

**Input Format**

The first line contains an integer  . Input will consist of  lines where  is the number given in the first line of the input followed by  lines.

Each of the next  line contains the type of the elements provided and depending on the type, either two strings or two integers or two floating point numbers will be given. The type will be one of  _int_,  _float_  or  _string_  types only. Out of the following two elements, you have to concatenate or add the second element to the first element.

**Constraints**

  
, where  is any float value  
, where valueint  is any int value  
, where  is the length of any string

**The time limit for this challenge is 4 seconds.**

**Output Format**

The code provided in the code editor will use your class template to add/append elements and give the output.

**Sample Input**

```
3
string John Doe
int 1 2
float 4.0 1.5

```

**Sample Output**

```
JohnDoe
3
5.5

```

**Explanation**

"Doe" when appended with "John" gives "JohnDoe". 2 added to 1 gives 3, and 1.5 added to 4.0 gives 5.5.
  
  

## Problems & References

### Common Problem - Time Limit Exceeded.
### Solution: 
```cpp
int  start_up() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  return  0;
}

int  static  r  =  start_up();

#define  endl  '\n';
```
in C++14 mode.
Make this run once before main.
[Original Solution Link](https://www.hackerrank.com/challenges/c-class-templates/forum/comments/654560)

### Explanation:
- The static `start_up` function speeds up _cout_ and `#define` changes endl to '\n', that prevents flushing buffer for each line.

by [fefe_wyx](https://www.hackerrank.com/challenges/c-class-templates/forum/comments/450686) on Hackerrank:

> There are quite a lot of I/O cin >> ..., cout <<... going on in the program. This just make these faster.
The C++ cin, cout must sync with stdin and stdout, if you want to use all of them. Here the latter are not used at all, so no need to sync with them.
cin, cout must also sync (be tied) with each other, to make interaction with user (to make sure the use can see all the result of cout, before a cin executes). There is actually no interaction needed here, so this relation is also not need.
All these sync/tie takes time. As mosting of the time in this program is I/O(cin and cout. the calculation actually would not take much time), remove sync/tie can make this program run much faster. (I did't test the actually time used though)
For more details, check this: https://stackoverflow.com/a/31165481/1058916

 - https://stackoverflow.com/questions/18892281/most-optimized-way-of-concatenation-in-strings