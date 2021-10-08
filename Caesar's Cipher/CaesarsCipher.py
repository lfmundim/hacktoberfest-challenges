
n = int(input("Number os cases: "))

def cipher(string, shift):
    return ''.join(chr((ord(c) - 65 - shift) % 26 + 65) for c in string)

for i in range(n):
    string = input("\nString: ")
    shift = int(input("\nShifts: "))
    print(cipher(string, shift))


string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
shift = 10

