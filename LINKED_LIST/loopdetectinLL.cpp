// Loop detection in linked list usong Floyd's algorithm
// In this we use "Slow and Fast pointer" 
// Time Complexity of this approach will be TC= O(N) and Space complexity will be SC=O(1)
// We will shift slow pointer 1 position ahead and Fast pointer 2 position ahead 
// we will shift these pointers until Slow==Fast
// If Slow==Fast, then there exist a loop


// Algo
// Intialize slow and fast with head -----> slow= head fast=head
// apply loop -----> while(fast!=NULL && fast->next !=NULL)
// slow =slow->next and fast= fast->next->next
// if(slow==fast) return true else false

