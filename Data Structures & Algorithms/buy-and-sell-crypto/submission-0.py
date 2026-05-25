class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max=0
        low=0
        high=0
        for i in range(len(prices)):
            if(i==0):
                low = prices[i]

            if(prices[i]<low):
                low = prices[i] 
            elif(prices[i]>low and (prices[i]-low)>max):
                max=prices[i]-low
            elif(prices[i]>low and (prices[i]-low)<max):
                continue
        
        return max

            