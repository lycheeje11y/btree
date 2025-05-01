import java.lang.Math;
import java.util.Scanner;

public class Main {
	static Scanner f;

	public static void main(String[] args) {
		f = new Scanner(System.in);

		int[][] ar1 = getMapFromInput();
		int[][] ar2 = getMapFromInput();


		System.out.println(sumOfAbsDifference(ar1, ar2))
	}

	static int sumOfAbsDifference(int[][] ar1, int[][] ar2) {
		int sum = 0;

		int colLength = 0;
		if (ar1.length < ar2.length) {
			colLength = ar1.length;
		} else {
			colLength = ar2.length;
		}

		int rowLength = 0;
		if (ar1[0].length < ar2[0].length) {
			rowLength = ar1[0].length;
		} else {
			rowLength = ar2[0].length;
		}

		for (int r = 0; r < colLength; r++) {
			for (int c = 0; c < rowLength; c++) {
				sum += Math.abs(ar1[r][c] - ar2[r][c]);
			}
		}

		return sum;
	}

	static int[][] getMapFromInput() {
		int R = f.nextInt();
		int C = f.nextInt();
		int[][] arr = new int[R][C];
		for (int r = 0; r < R; r++) {
			for (int c = 0; c < C; c++) {
				arr[r][c] = f.nextInt();
			}
		}

		return arr;
	}
}
