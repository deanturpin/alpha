#TODO
- rename routines that clash (need tst namespace)
- raii
- override specifier
- chrono
- threads, thread_local
- mutex
- Big O
- user literals - http://en.cppreference.com/w/cpp/language/user_literal
- templates, typenames, typeid
- lambda, nullary lambda - http://en.cppreference.com/w/cpp/language/lambda
- explicit operators - http://en.cppreference.com/w/cpp/language/explicit

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
-------------------- bottom of RAM

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

struct class union friend

private protected public 

inline mutable operator virtual explicit 

switch case break default(1) continue

catch throw try

typedef typeid typename

true false

while for if do else

new delete(1)

unsigned signed const long

auto(1) void bool char wchar_t float double short int

xor xor_eq and and_eq bitand bitor not not_eq  or or_eq compl

export(1) extern static

volatile register 

sizeof this template asm enum goto return

## C++11
decltype constexpr lignas alignof char16_t char32_t static_assert thread_local nullptr noexcept override final

## Concepts TS
requires concept

#To sort
- to_string etc
- parallelism TS
- generate main and prototypes from filenames
- is_class
- is_polymorphic
- type alias http://en.cppreference.com/w/cpp/language/type_alias
- types http://en.cppreference.com/w/cpp/language/types
- https://en.wikipedia.org/wiki/Concepts_%28C%2B%2B%29#
- http://en.cppreference.com/w/cpp/language/override
- http://en.cppreference.com/w/cpp/language/list_initialization
- http://en.cppreference.com/w/cpp/language/constexpr
- http://en.cppreference.com/w/cpp/language/decltype
- volatile and register
- noexcept
- nullptr
- Auto pointers, shared pointers
- Lambda expressions
- virtual
- static
- Agile versus waterfall

