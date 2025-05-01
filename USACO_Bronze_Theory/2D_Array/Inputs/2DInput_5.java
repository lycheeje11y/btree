import java.util.Scanner;
import java.util.Arrays;

public class Main {
	static Scanner f;

	public static void main(String[] args) {
		f = new Scanner(System.in);

		int N = f.nextInt();
		int M = f.nextInt();

		int[][] result = solve(N, M);

		for (int[] ar : result) {
			for (int i : ar) {
				System.out.print(i + " ");
			}
			System.out.println();
		}
	}

	static int[][] solve(int N, int M) {
		int[][] arr = new int[N * 2][M * 2];
		for (int r = 0; r < N*2; r+=2) {
			for (int c = 0; c < M*2; c+=2) {
				int input = f.nextInt();
				arr[r][c] = input;
				arr[r][c+1] = input;

				arr[r+1][c] = input;
				arr[r+1][c+1] = input;
			}
		}

		return arr;
	}
}
