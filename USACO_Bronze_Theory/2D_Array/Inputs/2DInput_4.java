import java.util.Scanner;
import java.util.Arrays;

public class Main {
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


		for (int r = 0; r < N; r++) {
			for (int c = 0; c < N; c++) {
				if (r == c || r + c == N - 1) {
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
