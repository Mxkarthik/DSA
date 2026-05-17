def Merge(nums,start,mid,end):
    i = start 
    j = mid+1
    temp = []
    while ( i <= mid and j <= end):
        if (nums[i] <= nums[j]):
            temp.append(nums[i])
            i += 1
        else :
            temp.append(nums[j])
            j += 1
    while ( i <= mid ):
        temp.append(nums[i])
        i+=1
    while ( j <= end ):
        temp.append(nums[j])
        j +=1
    for i in range(0,len(temp)):
        nums[i+start] = temp[i]


def MergeSort(nums,start,end):
    if ( start >= end):
        return
    mid = start + (end-start)//2
    MergeSort(nums,start,mid)
    MergeSort(nums,mid+1,end)
    Merge(nums,start,mid,end)


print("Please enter the elements in the list to sort \n")
nums = []
size = int(input("Enter size of the list"))
for i in range (0,size):
    nums.append(int(input()))

MergeSort(nums,0 , len(nums)-1)
print(nums)