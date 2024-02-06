class Stack:
    def __init__(self):
        self.items = []
    def push(self, item):
        self.items.append(item)
    def pop(self):
        if not self.is_empty():
            return self.items.pop()
    def is_empty(self):
        return len(self.items) == 0

def evaluate_postfix(expression):
    stack = Stack()
    operators = {'+': lambda x, y: x+y,
                 '-': lambda x, y: x-y,
                 '*': lambda x, y: x*y,
                 '/': lambda x, y: x/y}
    tokens = expression.split()

    for token in tokens:
        if token.isdigit() or (token[0] =='-' and token[1:].isdigit()):
            stack.push(int(token))
        elif token in operators:
            operand2 = stack.pop()
            operand1 = stack.pop()
            result = operators[token](operand1, operand2)
            stack.push(result)
        else:
            print(f"Invalid token: {token}")
            return None

    if not stack.is_empty():
        return stack.pop()
    else:
        print("Invalid expression")
        return None

if __name__ == "__main__":
    postfix_expression = input("Arithmetic expressions: ")
    result = evaluate_postfix(postfix_expression)
    if result is not None:
        print(f"Result of the expression: {result}")