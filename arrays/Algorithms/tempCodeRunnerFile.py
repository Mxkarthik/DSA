def majorityElement(nums):
    ele = 0
    count = 0
    for i in range (0,len(nums)):
        if ( count == 0):
            ele = nums[i]
            count = 1
        elif (nums[i] == ele):
            count +=1 
        else :
            count -=1
    
    for i in range(0,len(nums)):
        if ( nums [i] == ele):
            count += 1 
        
    if (count > len(nums)//2):
        return ele
    return -1