import java.util.Arrays;
import java.util.Scanner;

public class Main {
		static Scanner f;
		public static void main(String[] args) {
				f = new Scanner(System.in);

				int N = f.nextInt();
				int M = f.nextInt();

				int[][] arr = new int[N][M];
				for (int r = 0; r < N; r++) {
						for (int c = 0; c < M; c++) {
								arr[r][c] = f.nextInt();

								if (r == 0 || r == arr.length-1) {
										arr[r][c] = 0;
								} else if (c == 0 || c == M-1) {
										arr[r][c] = 0;
								}
						}
				}

				for (int[] ar : arr) {
					for (int i = 0; i < ar.length; i++) {
						System.out.print(ar[i] + " ");
					}

					System.out.println();
				}
		}
}
