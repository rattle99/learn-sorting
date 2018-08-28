# Insertion sort
It iterates, consuming one input element each repetition, and growing a sorted output list. At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list, and inserts it there. It repeats until no input elements remain.

## Pseudocode
```
procedure insertionSort(A : list of sortable items)
	n = length(A)
    for i = 1 to n exclusive do
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