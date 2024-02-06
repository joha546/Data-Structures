class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insert_first(start, item):
    new_node = Node(item)
    new_node.next = start
    start = new_node
    return start

def display_list(start):
    current = start
    while current is not None:
        print(current.data, end=" -> ")
        current = current.next
    print("\n")

def main():
    start = None

    start = insert_first(start, 3)
    start = insert_first(start, 7)
    start = insert_first(start, 12)

    print("Linked List:")
    display_list(start)

    item_to_insert = int(input())
    start = insert_first(start, item_to_insert)

    print("New Linked List: ")
    display_list(start)

if __name__ == "__main__":
    main()
