
class Solution {
 public:
  int countHousePlacements(int n) {
    constexpr int kMod = 1'000'000'007;
    int house = 1;  // the number of ways ending in a house
    int space = 1;  // the number of ways ending in a space
    int total = house + space;

    for (int i = 2; i <= n; ++i) {
      house = space;
      space = total;
      total = (house + space) % kMod;
    }

    return static_cast<long>(total) * total % kMod;
  }
};
