import java.util.Arrays;

public class Main {
	static void solve(int N) {
		int[][] arr = new int[N][N];

		for (int r = 0; r < N; r++) {
			for (int c = 0; c < N; c++) {
				if (c > r) {
					arr[r][c] = 0;
				} else {
					arr[r][c] = c+1;
				}
			}
		}

		for (int[] ar : arr) {
			System.out.println(Arrays.toString(ar));
		}
	}
}
