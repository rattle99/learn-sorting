# Merge sort
It is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves.

## Pseudocode
```
procedure mergeSort(A : list of sortable items)
	n = length(A)
    if n = 1 then
        return A

    mid = n/2
    left = empty list
    right = empty list

    for i = 0 to n exclusive do
        if i < mid then
            add A[i] to left
        else
            add A[i] to right
    end for
    
    return merge(mergeSort(left), mergeSort(right))
end procedure

procedure merge(left, right)
    result = empty list
    ileft = 0
    iright = 0
    iresult = 0

    while ileft < length(left) && iright < length(right) do
        if left[ileft] < right[iright] then
            add left[ileft] to result
            ileft = ileft+1
        else
            add right[iright] to result
            iright = iright+1
    end while

    while ileft < length(left) do
        add left[ileft] to result
        ileft = ileft+1
    end while

    while iright < length(right) do
        add right[iright] to result
        iright = iright+1
    end while

    return result
end procedure
```

## Example
![](https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif)

## Details

| Name                  | Best            | Average             | Worst               | Memory    | Stable    | In Place  |
| --------------------- | :-------------: | :-----------------: | :-----------------: | :-------: | :-------: | :-------- |
| **Merge sort**        | n&nbsp;log(n)   | n&nbsp;log(n)       | n&nbsp;log(n)       | n         | Yes       |   No      |
