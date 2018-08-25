# Insertion sort
Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time.

## Pseudocode
```
procedure insertionSort(A : list of sortable items)
	n = length(A)
    for i = 1 to n inclusive do
        current = A[i]
        j = i-1
        while j >= 0 and A[j] > current
            A[j+1] = A[j]
            j = j-1
        end while
        A[j+1] = current
    end for
end procedure
```

## Example
![](https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif)

## Details
+ Time Complexity: O(n<sup>2</sup>)
+ Auxiliary Space: O(1)
+ Sorting In Place: Yes
+ Stable: Yes