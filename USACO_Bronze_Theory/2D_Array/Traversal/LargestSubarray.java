import java.util.Scanner;
import java.util.Arrays;

public class LargestSubarray {
	static Scanner f;
	public static void main(String[] args) {
		f = new Scanner(System.in);

		int N = f.nextInt();
		int[][] arr = new int[N][N];

		for (int r = 0; r < N; r++) {
			for (int c = 0; c < N; c++) {
				arr[r][c] = f.nextInt();
			}
		}

		int largest = 0;
		int ans = -1;
		for (int r = 0; r < arr.length; r++) {
			int sum = 0;
			for (int i : arr[r]) {
				sum += i;
			}
			if (sum > largest) {
				largest = sum;

				ans = r;
			}
		}

		System.out.println(Arrays.toString(arr[ans]));
	}
}
