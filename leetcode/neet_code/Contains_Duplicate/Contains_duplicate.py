class Solution:
    def contains_duplicate(self, nums):
        duplicates = {}
        for num in nums:
            if num in duplicates:
                return True
            duplicates[num] = 1
        return False

def main():
    t = int(input())  # Number of test cases
    sol = Solution()

    # Process each test case
    for _ in range(t):
        arr = list(map(int, input().split()))  # Read a line of numbers and convert them to integers
        
        if sol.contains_duplicate(arr):
            print("contains duplicates")
        else:
            print("doesn't contain duplicates")

if __name__ == "__main__":
    main()
