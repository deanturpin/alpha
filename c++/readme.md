#To implement
- [ ] RAII


# Memory
```
--------------------
stack (static)



heap (dynamic)
-------------------- global variables and static variables that are initialized to zero or do not have explicit initialization in source code
bss
-------------------- any global or static variables which have a pre-defined value and can be modifie
data
-------------------- compiled code
text
-------------------- bottom of RAM (0)

```

#RAII
Acquire resources on construction and release them on destruction

# Big 'O' Notation
"In mathematics, big O notation describes the limiting behavior of a function when the argument tends towards a particular value or infinity, usually in terms of simpler functions. It is a member of a larger family of notations that is called Landau notation, Bachmann–Landau notation (after Edmund Landau and Paul Bachmann),[1][2] or asymptotic notation."

"In computer science, big O notation is used to classify algorithms by how they respond (e.g., in their processing time or working space requirements) to changes in input size."

##Examples
- Local variables - memory released when out of scope
- Which resources?

#Exceptions
TBD

#Threads
- OpenMP
- Mutex / semaphores
- *http://www.drdobbs.com/tools/avoiding-classic-threading-problems/231000499

##Issues
- Data races, deadlocks and livelocks - unsynchonised access to shared memory can introduce race conditions and undefined behaviour (program results depend nondeterministcially on the relative timings of two or more threads)
- Threads versus processes
- Too few threads - alogorithm is sub-optimal
- Too many threads - overhead of creating/managing and partitioning the data is greater than processing advantage; software threads outnumber the available hardware threads and the OS must intervene

# Containers
## Sequence containers
array 
vector
deque
forward_list 
list

## Container adapters
stack
queue
priority_queue

## Associative containers
### Ordered
set multiset map multimap 

### Unordered
unordered_set unordered_multiset unordered_map unordered_multimap

# Keywords
static_cast reinterpret_cast dynamic_cast const_cast

using(1) namespace

struct switch template this throw true try typedef typeid typename union unsigned virtual void volatile wchar_t while xor xor_eq and and_eq asm auto(1) bitand bitor bool break case catch char class compl const continue default(1) delete(1) do double else enum explicit export(1) extern false float for friend goto if inline int long mutable new not not_eq operator or or_eq private protected public register return short signed sizeof static

## C++11
- decltype 
- constexpr
- lignas
- alignof
- char16_t
- char32_t
- static_assert
- thread_local
- nullptr
- noexcept

## Concepts TS
- requires
- concept

## TBD
- override
- final

#To sort
- parallelism TS
- explicit operators - http://en.cppreference.com/w/cpp/language/explicit
- generate main and prototypes from filenames
- is_class
- is_polymorphic
- type alias http://en.cppreference.com/w/cpp/language/type_alias
- types http://en.cppreference.com/w/cpp/language/types
- templates, typenames, typeid
- thread_local
- http://en.cppreference.com/w/cpp/language/user_literal
- https://en.wikipedia.org/wiki/Concepts_%28C%2B%2B%29#
- http://en.cppreference.com/w/cpp/language/override
- http://en.cppreference.com/w/cpp/language/list_initialization
- http://en.cppreference.com/w/cpp/language/constexpr
- http://en.cppreference.com/w/cpp/language/decltype
- volatile
- http://en.cppreference.com/w/cpp/language/user_literal
- lambda - http://en.cppreference.com/w/cpp/language/lambda
- nullary lambda
- noexcept
- nullptr
- Algorithm complexity refresher - Big O
- Auto pointers, shared pointers
- Lambda expressions
- YouTube questions
- virtual
- static
- register keyword
- heap / stack / data
- override specifier
- Agile versus waterfall

