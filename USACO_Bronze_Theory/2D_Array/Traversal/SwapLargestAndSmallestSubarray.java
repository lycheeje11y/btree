import java.util.Scanner;
import java.util.Arrays;

public class SwapLargestAndSmallestSubarray {
	static Scanner f;
	public static void main(String[] args) {
		f = new Scanner(System.in);

		int N = f.nextInt();

		int largest = Integer.MIN_VALUE;
		int smallest = Integer.MAX_VALUE;

		int[][] arr = new int[N][N];
		for (int r = 0; r < N; r++) {
			int sum = 0;
			for (int c = 0; c < N; c++) {
				int input = f.nextInt();
				arr[r][c] = input;
				sum += input;
				if (sum > largest) {
					largest = r;
					continue;
				}
			}

			if (sum < smallest) {
				smallest = r;
			}
		}

		int[] buf = arr[largest];

		arr[largest] = arr[smallest];
		arr[smallest] = buf;

		for (int[] ar : arr) {
			System.out.println(Arrays.toString(ar));
		}
	}
}
