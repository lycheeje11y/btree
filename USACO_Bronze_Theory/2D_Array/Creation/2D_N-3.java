import java.util.*;

public class Main {
	static void solve(int N) {
		// Write code here!
		int[][] arr = new int[N][N];
		int x = 1;
		for (int r = 0; r < N; r++) {
			for (int c = 0; c < N; c++) {
				arr[r][c] = x;
				x++;
			}
		}
		for (int[] ar : arr) {
			System.out.println(Arrays.toString(ar));
		}
	}
}
