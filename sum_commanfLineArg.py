 import sys

def add_numbers(num1, num2):
    return num1 + num2

if __name__ == "__main__":
    # Check if two command-line arguments are provided
    if len(sys.argv) != 3:
        print("Usage: python add.py <num1> <num2>")
    else:
        # Convert command-line arguments to numbers
        try:
            num1 = float(sys.argv[1])
            num2 = float(sys.argv[2])
            # Calculate the sum
            result = add_numbers(num1, num2)
            print("Sum:", result)
        except ValueError:
            print("Please provide valid numbers as command-line arguments.")
