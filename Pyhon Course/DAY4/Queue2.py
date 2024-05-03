import pickle
class QueueOutOfRangeException(Exception):
    pass

class queue:

    def __init__(self, name,max_size):
        self.name = name
        self.max_size = max_size
        self.values = []
        self.valid_size()

        # Register the queue instance
        queue.queues[name] = self

    def valid_size(self):
        if self.max_size <= 0:
            raise ValueError("queue max_size must be > 0")

    def insert(self, new_value):
        if len(self.values) < self.max_size:
            self.values.append(new_value)
        else:
            raise QueueOutOfRangeException("Queue is full. Cannot insert more values.")

    def pop(self):
        if not self.is_empty():
            return self.values.pop(0)
        else:
            print("Warning: Cannot pop from an empty queue.")
            return None

    def is_empty(self):
        return len(self.values) == 0

    queues = {}

    @classmethod
    def save(cls, queues_file):
        with open(queues_file, 'wb') as file:
            pickle.dump(cls.queues, file)

    @classmethod
    def load(cls, queues_file):
        with open(queues_file, 'rb') as file:
            cls.queues = pickle.load(file)



q1 = queue(name='q1', max_size=3)
q1.insert(1)
q1.insert(2)
q1.insert(3)

q2 = queue('q2', 2)
q2.insert(3)
q2.insert(8)


q3 = queue(name='q3', max_size=2)
q3.insert(37)
q3.insert(84)


queue.save('queues_file.txt')
queue.load('queues_file.txt')


loaded = queue.queues['q1']
print("name: ",loaded.name,"\nmax size: ", loaded.max_size ,"\nvalues: ",loaded.values)