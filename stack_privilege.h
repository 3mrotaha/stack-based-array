#ifndef _ADT_PRIVILEGE_
#define _ADT_PRIVILEGE_

ErrorStates_t CreateStack(Stack_t *);

ErrorStates_t ClearStack(Stack_t *);

ErrorStates_t Push(StackEntry, Stack_t *);

ErrorStates_t Pop(StackEntry *, Stack_t *);

ErrorStates_t StackTop(StackEntry *, Stack_t *);

ErrorStates_t StackEmpty(Stack_t);

ErrorStates_t StackFull(Stack_t);

ErrorStates_t TraverseStack(Stack_t, void (*pf) (StackEntry));

#endif