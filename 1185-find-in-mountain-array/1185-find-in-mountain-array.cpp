class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int start = 0, end = mountainArr.length() - 1, peak = -1;
        while(end != start){
           peak = start + (end - start) / 2;
           if(mountainArr.get(peak) < mountainArr.get(peak + 1) ){
              start = peak + 1;
           }
           else end = peak;
        }

        peak = start;
        start = 0, end = peak;
        while(start <= end){
           int targetIndex = start + (end - start) / 2;
           int currentElement = mountainArr.get(targetIndex);
           if(currentElement == target ) return targetIndex;
           else if(currentElement > target){
               end = targetIndex - 1;
           }
           else start = targetIndex + 1;
        }
        
        start = peak, end = mountainArr.length() - 1;
        while(start <= end){
           int targetIndex = start + (end - start) / 2;
           int currentElement = mountainArr.get(targetIndex);
           if(currentElement == target ) return targetIndex;
           else if(currentElement > target){
               start = targetIndex + 1;
           }
           else  end = targetIndex - 1;
        }

        return -1;
    }
};