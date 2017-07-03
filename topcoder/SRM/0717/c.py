

class DerangementsDiv2:

    def count(self, n, m):
        permutation_table = [1 for _ in range(m+n+1)]
        for i in range(n+m):
            permutation_table[i+1] = permutation_table[i] * (i + 1)

        ans = 0
        for j in range(m):
            if permutation_table[j+1] != j:
                ans += 1

        d = 1000000007
        return ans % d


print(DerangementsDiv2().count(3, 3))
print(DerangementsDiv2().count(20, 27))
