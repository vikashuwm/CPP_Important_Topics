# CPP_Important_Topics
CPP_Important_Topics
Syntax and Basic Concepts:


Functions:
Function overloading.
Inline functions.

Object-Oriented Programming (OOP):
Constructors (default, parameterized, copy) and destructors.
Operator overloading.
Encapsulation, inheritance, and polymorphism.
Abstract classes and pure virtual functions.
Friend functions and friend classes.

Memory Management:
Dynamic memory allocation and deallocation.
Memory leaks and how to avoid them.
RAII (Resource Acquisition Is Initialization) principle.

STL (Standard Template Library):
Containers (vectors, lists, queues, stacks, sets, maps, etc.).
Algorithms (sorting, searching, etc.).
Iterators.
Function objects.
Functors.
Pair and Tuple:
std::pair for representing a pair of values.
std::make_pair for creating pairs easily.
std::tuple for representing a heterogeneous collection of values.
Structured binding with tuples.
Associative Containers:
std::set and std::map.
std::unordered_set and std::unordered_map.

Templates and Generic Programming:
Template classes and functions.
Template specialization.
Generic programming principles.
Variadic templates.

Exception Handling:
Handling errors and exceptions using try, catch, and throw.
Exception specifications.

File I/O:
Reading from and writing to files using ifstream, ofstream.

Concurrency:
Basics of multithreading using std::thread.
Synchronization mechanisms (mutex, condition variables).
Atomics.
Futures and promises.
Thread Local Storage (TLS):
Using thread-specific data.

Smart Pointers:
std::unique_ptr, std::shared_ptr, and std::weak_ptr.
Circular references and how smart pointers address them.
Custom deleters.
std::enable_shared_from_this:
Enabling shared ownership for this object.

Lambda Expressions:
Introduction to anonymous functions for concise code.
Capture clauses.
Generic Lambdas:
Lambdas with auto parameters.

Move Semantics:
Rvalue references.
Move constructors and move assignment operators.
std::move function.

C++11/14/17/20 Features:
C++14 Features:
Variable Templates:
Declaring templates with non-type parameters.
Generic Lambdas:
Introduction of auto parameters in lambdas.
C++17 Features:
Structured Bindings:
Simplifying access to elements in tuples and other structures.
std::optional:
Representing optional values.
C++20 Features:
Concepts:
Defining constraints on template parameters.
Coroutines:
Asynchronous programming with coroutines.
co_await and co_yield.
Ranges Library:
Simplifying and unifying operations on ranges.
Concepts:
Introducing constraints on template parameters.
Coroutines:
Asynchronous programming with coroutines.
co_await and co_yield.
Ranges Library:
Simplifying and unifying operations on ranges.
Concepts:
Introducing constraints on template parameters.
Copy Constructor and Copy Assignment Operator:

Understanding and implementing copy constructors and copy assignment operators.
Virtual Functions and Polymorphism:

Using virtual functions and understanding polymorphism.
Virtual destructors.
Pure virtual functions and abstract classes.
vtable and vptr.
Friend Functions and Friend Classes:

Friend Functions:
Non-member functions with access to private members.
Friend Classes:
Entire classes granted friendship.
Design Patterns:

Done : Singleton Pattern:
Done : Ensuring a class has only one instance.
Done : Factory Pattern:
Done : Creating objects without specifying their exact class.
Observer Pattern:
Defining a one-to-many dependency between objects.

Concurrency in C++11 and Beyond:
std::async and std::future:
Asynchronous execution of functions.
Thread Synchronization:
Ensuring safe concurrent access with locks.
Atomic operations.
Memory Orderings:
Understanding memory orderings in atomic operations.
Concepts (C++20):

Introduction to Concepts:
Defining constraints on template parameters.
Coroutines (C++20):

Understanding Coroutines:
Asynchronous programming with coroutines.
co_await and co_yield.
Generator Coroutines:
Implementing generators using coroutines.
Type Traits (C++11):

std::is_same, std::is_pointer, etc.:
Type traits for compile-time type information.
std::enable_if:
Enabling/disabling functions based on type traits.
STL Additional Containers:

std::queue and std::stack:
Adapters based on deque or list.
std::priority_queue:
Priority queue based on a heap.
STL Additional Algorithms:

std::accumulate, std::inner_product:
Accumulating and inner product of elements.
std::partial_sum, std::exclusive_scan, std::inclusive_scan:
Generating partial sums and scans.