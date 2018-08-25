# Selection sort
The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the list, exchanging (swapping) it with the first element, and repeats the process leaving element on first position.

## Pseudocode
```
procedure selectionSort(A : list of sortable items)
    for i = 0 to n exclusive do
        index_of_min = i
        for j = 1 to n inclusive
            if A[j] < A[index_of_min] then
            	index_of_min = j
        end for
        swap(A[i], A[index_of_min])
    end for
end procedure
```

## Example
![](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)

## Details
+ Time Complexity: O(n<sup>2</sup>)
+ Auxiliary Space: O(1)
+ Sorting In Place: Yes
+ Stable: No