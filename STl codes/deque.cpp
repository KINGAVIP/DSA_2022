#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d={1,2,7,1,8};
    d.push_front(9);
    d.push_back(2);
    d.pop_front();
    d.pop_back();
    for(auto i:d)
        cout<<i;

   
}


/*

Let me list down the differences:

Deque manages its elements with a dynamic array, provides random access, and has almost the same interface as a vector.
List manages its elements as a doubly linked list and does not provide random access.
Deque provides Fast insertions and deletions at both the end and the beginning. Inserting and deleting elements in the middle is relatively slow because all elements up to either of both ends may be moved to make room or to fill a gap.
In List, inserting and removing elements is fast at each position, including both ends.
Deque: Any insertion or deletion of elements other than at the beginning or end invalidates all pointers, references, and iterators that refer to elements of the deque.
List: Inserting and deleting elements does not invalidate pointers, references, and iterators to other elements.
*/