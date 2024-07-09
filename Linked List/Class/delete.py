class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node

    def display(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")

    def delete_node(self, key):
        current = self.head

        # If the key is in the head
        if current and current.data == key:
            self.head = current.next
            current = None
            return

        prev = None
        while current and current.data != key:
            prev = current
            current = current.next

        # If the key is not present in the linked list
        if not current:
            print(f"Node with key {key} not found.")
            return

        # Unlink the node from the linked list
        prev.next = current.next
        current = None

if __name__ == "__main__":
    linked_list = LinkedList()

    n = int(input("Enter the number of nodes: "))
    for _ in range(n):
        value = int(input("Enter the value for the node: "))
        linked_list.append(value)

    print("\nOriginal Linked List:")
    linked_list.display()

    key_to_delete = int(input("\nEnter the key to delete: "))
    linked_list.delete_node(key_to_delete)

    print(f"\nLinked List after deleting node with key {key_to_delete}:")
    linked_list.display()
