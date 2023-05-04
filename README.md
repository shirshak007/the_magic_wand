# the_magic_wand

<h4>The Magic Wand</h4>
You are a wizard who possesses a magical wand that can be used to change the values of an array. Your wand has two powers: Increase and Decrease. With each use of the wand, you can either increase or decrease any element of the array by 1.


One day, a group of villagers came to you with a problem. They had an array of positive integers of size N and a set of queries of size M. For each query, queries[i], they wanted to make all the elements of the array equal to queries[i] using your magic wand.


To help the villagers, you decided to use your magic wand to perform the operations. However, each time you perform an operation, the cost of using your wand increases. The cost of using your wand for an operation on an element is equal to the absolute difference between the value of the element and the desired value after the operation.


Example:

If you want to change an element from 5 to 3, it will cost you 2. If you want to change an element from 7 to 8, it will cost you 1.


You can perform any number of operations on any element of the array for a given query. However, the cost of using the wand for each operation accumulates, and you want to minimize the total cost of all operations for each query.



Input Format
The first line of the input consists of two space-separated integers N (length of array) and M (length of queries).

The second line of input consists of N space-separated integers arr[i].

The third line of input consists of M space-separated integers queries[i].



Constraints
1 <= N <= 10^5

1 <= M <= 10^5

1 <= arr[i] <= 10^9

1 <= queries[i] <= 10^9



Output Format
Print a list of integers of cost of length m, where cost[i] is the minimum cost to make all elements of nums equal to queries[i].
