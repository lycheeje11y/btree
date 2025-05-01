import java.util.Scanner;

public class NoCorners {
	static Scanner f;

	public static void main(String[] args) {
		f = new Scanner(System.in);

		int T = f.nextInt();

		for (int test_case = 0; test_case < T; test_case++) {
			int R = f.nextInt();
			int C = f.nextInt();

			int[][] arr = new int[R][C];
			for (int r = 0; r < R; r++) {
				for (int c = 0; c < C; c++) {
					arr[r][c] = f.nextInt();
				}
			}

			solve(R, C, arr);
		}
	}

	static void solve(int R, int C, int[][] arr) {
		int sum = 0;
		for (int r = 0; r < R; r++) {
			for (int c = 0; c < C; c++) {
				if ((r == 0 || r == arr.length-1) && (c == 0 || c == arr[r].length-1)) {
					continue;
				}


				sum += arr[r][c];
			}
		}

		System.out.println(sum);
	}
}
