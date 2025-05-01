import java.util.Scanner;
import java.util.Arrays;

public class LargestSubarrayIndex {
	static Scanner f;
	public static void main(String[] args) {
		f = new Scanner(System.in);

		int N = f.nextInt();
		int greatest = -1;

		int[][] arr = new int[N][N];
		for (int r = 0; r < N; r++) {
			for (int c = 0; c < N; c++) {
				arr[r][c] = f.nextInt();
			}
		}
	}
}
