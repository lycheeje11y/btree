import java.util.Arrays;

public class Main {
	static void solve(int N, int M) {
		int[][] arr = new int[N][M];
		int iwantogoto = M-1; // 3
		for (int r = 0; r < N; r++) { // 0
			for (int c = 0; c < M; c++) { // 2
				if (c >= iwantogoto) {
					arr[r][c] = c+1;
				}
			}
			iwantogoto--; // 1
		}

		for (int[] ar : arr) {
			System.out.println(Arrays.toString(ar));
		}
	}

}
