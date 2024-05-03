class queue1:
    def __init__(self):
        self.values = []
        # self.front = 0
        # self.rear = 0

    def is_empty(self):
        return len(self.values) == 0

    def insert(self, value):
        self.values.append(value)

    def pop(self):
        if not self.is_empty():
            return self.values.pop(0)
        else:
            print("Warning: you cannot pop from empty queue ...!!!")
            return None

    def print_queue(self):
        print("values of queue: ")
        for i in range(len(self.values)):
            print(self.values[i])





q1=queue1()
q1.insert(10)
q1.insert(20)
q1.insert(30)
q1.insert(40)
q1.print_queue()


q1.pop()
q1.pop()
q1.pop()
q1.pop()

q1.pop()


