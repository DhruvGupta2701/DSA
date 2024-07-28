class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
         for(int i = 0 ; i < image.size() ; i++){
            int start = 0;
            int end = image[0].size()-1;
            while(start <= end){
            int temp = image[i][start];
            image[i][start] = image[i][end];
            image[i][end] = temp;
            start++;
            end--;
            }
        }
        for(int i= 0 ; i < image.size() ; i++){
            for(int j = 0 ; j < image[0].size() ; j++){
                image[i][j] = image[i][j] ^ 1;
            }
        }
        return image;
    }
};
