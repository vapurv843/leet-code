class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int i = 0;
        int j = plants.size()-1;
        int count = 0;
        
        int alice =  capacityA;
        int bob = capacityB;
        while(i<j)
        {
            if(alice<plants[i])
            {
                count++;
                alice = capacityA;
            }
            if(bob<plants[j])
            {
                count++;
                bob = capacityB;
            }
            
            
            alice-=plants[i++];
            bob-=plants[j--];
           
        }
    
        if(i==j){
            if(alice>=bob){
			   //Alice has greater or equal water in her watering can compared to Bob.
                if(plants[i]>alice){
                    count++;
                    alice=capacityA;
                }
                alice-=plants[i++];
            }
            else{
				//Bob has greater water in his watering can compared to Bob.
                if(plants[j]>bob){
                    count++;
                    bob=capacityB;
                }
                bob-=plants[j--];
            }
        }
        return count;
            
        
    }
};