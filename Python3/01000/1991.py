from sys import stdin

def preorder(root):
    if root == '.':
        return
    else:
        print(root, end='')
        preorder(tree[root][0])
        preorder(tree[root][1])

def inorder(root):
    if root == '.':
        return
    else:
        inorder(tree[root][0])
        print(root, end='')
        inorder(tree[root][1])

def postorder(root):
    if root == '.':
        return
    else:
        postorder(tree[root][0])
        postorder(tree[root][1])
        print(root, end='')

n = int(stdin.readline().strip())
tree = {}

for i in range(n):
    r, lc, rc = stdin.readline().strip().split()
    tree[r] = (lc, rc)

preorder('A')
print()
inorder('A')
print()
postorder('A')