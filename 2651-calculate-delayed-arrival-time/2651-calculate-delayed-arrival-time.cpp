class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        
//         if(arrivalTime>=12 || delayedTime>=12 )
//         {
//             arrivalTime = arrivalTime%12;
//             delayedTime = delayedTime%12;
            
//         }
        
        int time = arrivalTime + delayedTime;
        
        if(time>=24)
        {
            time= time%24;
        }
        
        
        return time;
        
        
        
        
    }
};