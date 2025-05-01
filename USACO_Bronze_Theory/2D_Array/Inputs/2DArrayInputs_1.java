import java.util.Scanner;
import java.util.Arrays;

public class Main {
		static Scanner f;
		public static void main(String[] args) {
				f  = new Scanner(System.in);
				int N = f.nextInt();
				int M = f.nextInt();

				int[][] arr = new int[N][M];
				for (int r = 0; r < N; r++) {
					for (int c = 0; c < M; c++) {
						arr[r][c] = f.nextInt();
					}
				}

				int K = f.nextInt();
				for (int i = 0; i < K; i++) {
					System.out.println(arr[f.nextInt()][f.nextInt()]);
				}
		}
}
