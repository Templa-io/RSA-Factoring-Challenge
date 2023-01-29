import sys
import math

def main(filename):
    with open(filename, 'r') as file:
        for line in file:
            number = int(line.strip())
            print(f"{number}=", end="")
            for i in range(2, int(math.sqrt(number)) + 1):
                if number % i == 0:
                    print(f"{i}*{number//i}")
                    break
            else:
                print(f"{number}")

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("Usage: python factors.py <file>")
        sys.exit(1)
    main(sys.argv[1])
