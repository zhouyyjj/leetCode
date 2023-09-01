int minCostClimbingStairs(int* cost, int costSize) {
    int prev = 0, curr = 0;
    for (int i = 2; i <= costSize; i++) {
        int next = fmin(curr + cost[i - 1], prev + cost[i - 2]);
        prev = curr;
        curr = next;
    }
    return curr;
}


