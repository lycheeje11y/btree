import java.lang.Math;
import java.util.Scanner;
public class Main {
	static Scanner f;
	public static void main(String[] args) {
		f = new Scanner(System.in);

		int R = f.nextInt();
		int C = f.nextInt();
		int[][] ar1 = getMap(R, C);
		int[][] ar2 = getMap(R, C);

		int sum = 0;
		for (int r = 0; r < R; r++) {
			for (int c = 0; c < C; c++) {
				sum += Math.abs(ar1[r][c] - ar2[r][c]);
			}
		}

		System.out.println(sum);
	}

	static int[][] getMap(int R, int C) {
		int[][] arr = new int[R][C];
		for (int r = 0; r < R; r++) {
			for (int c = 0; c < C; c++) {
				arr[r][c] = f.nextInt();
			}
		}

		return arr;
	}
}
