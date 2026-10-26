
#include <vector>
using namespace std;

class Solution {
public:
    // Ordena los numeros y realiza los intercambios del juego
    vector<int> numberGame(vector<int>& nums) {
        int cantidad = nums.size();

        // Ordenamiento burbuja
        for (int i = 0; i < cantidad - 1; i++) {
            for (int j = 0; j < cantidad - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    int numeroIzquierdo = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = numeroIzquierdo;
                }
            }
        }

        // Intercambiar los numeros de Alice y Bob
        for (int i = 0; i < cantidad; i += 2) {
            int numeroAlice = nums[i];
            int numeroBob = nums[i + 1];

            nums[i] = numeroBob;
            nums[i + 1] = numeroAlice;
        }

        return nums;
    }
};
