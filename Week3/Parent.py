def sign_check(a, b):
    if (a == '(' and b == ')') or (a == '{' and b == '}') or (a == '[' and b == ']'):
        return True
    return False

def find():
    n = int(input())
    S = [list() for _ in range(n)]
    input_strings = [input() for _ in range(n)]

    for i in range(n):
        for j in range(len(input_strings[i])):
            if input_strings[i][j] in '({[':
                S[i].append(input_strings[i][j])
            else:
                if S[i] and sign_check(S[i][-1], input_strings[i][j]):
                    S[i].pop()
                else:
                    break

    for i in range(n):
        if not S[i]:
            print("yes")
        else:
            print("no")


    find()
