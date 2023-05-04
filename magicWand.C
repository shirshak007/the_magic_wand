#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int queries[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &queries[i]);
    }

    // Compute the minimum cost for each query
    int min_costs[m];
    for (int i = 0; i < m; i++) {
        int q = queries[i];
        int total_cost = 0;
        for (int j = 0; j < n; j++) {
            total_cost += abs(arr[j]-queries[i]);
        }
        min_costs[i] = total_cost;
    }

    // Print the minimum costs
    for (int i = 0; i < m; i++) {
        printf("%d ", min_costs[i]);
    }

    return 0;
}
