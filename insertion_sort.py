def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1
        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

def main(): # Driver
    arr = [51, 42, 51, 5, 8, 7, 9, 12]
    print(f"Unsorted List: {arr}")
    insertion_sort(arr)
    print(f"sorted List: {arr}")

if __name__ == '__main__':
    main()
