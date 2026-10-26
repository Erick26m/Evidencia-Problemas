
#include <vector>
using namespace std;

class Solution {
public:
    // Ordena los numeros y cambia cada pareja de posicion
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();

        // Ordenamiento burbuja
        for (int i = n - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }

        // Intercambia los numeros de dos en dos
        for (int i = 0; i < n; i += 2) {
            int temp = nums[i];
            nums[i] = nums[i + 1];
            nums[i + 1] = temp;
        }

        return nums;
    }
};

