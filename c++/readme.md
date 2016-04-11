#TODO
- [x] dump function name before calling it in create_main
- [x] ratio
- [x] rename routines that clash (need tst namespace)
- [x] generate main from filenames

##Examples
- Local variables - memory released when out of scope
- Which resources?

#Exceptions
TBD

# Regex
TBD

#Threads
- OpenMP
- Mutex / semaphores
- http://www.drdobbs.com/tools/avoiding-classic-threading-problems/231000499

##Issues
- Data races, deadlocks and livelocks - unsynchonised access to shared memory can introduce race conditions and undefined behaviour (program results depend nondeterministcially on the relative timings of two or more threads)
- Threads versus processes
- Too few threads - alogorithm is sub-optimal
- Too many threads - overhead of creating/managing and partitioning the data is greater than processing advantage; software threads outnumber the available hardware threads and the OS must intervene

# Containers
**Sequence containers**

array 
vector
deque
forward_list 
list

**Container adapters**

stack
queue
priority_queue

**Associative containers (ordered)**

set multiset map multimap 

**Associative containers (unordered)**

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

xor xor_eq and and_eq bitand bitor not not_eq or or_eq compl

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
- Singleton design patterns 
- Types of cast 
- Three words to describe yourself 
- Which skills make you suitable for the role? 
- Difference between class and stryct 
