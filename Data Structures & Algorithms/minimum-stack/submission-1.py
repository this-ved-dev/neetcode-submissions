class MinStack:

    def __init__(self):
        self.stack = []
        self.minstack = []   

    def push(self, val: int) -> None:
        self.stack.append(val)
        comp=0
        if self.minstack: 
            comp = self.minstack[-1]
        else:
            comp = val 
        self.minstack.append(min(val, comp))

    def pop(self) -> None:
        self.stack.pop()
        self.minstack.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.minstack[-1]
        
