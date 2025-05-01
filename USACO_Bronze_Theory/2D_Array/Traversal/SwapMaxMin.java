import java.util.Scanner;
import java.util.Arrays;

public class SwapMaxMin {
	static Scanner f;

	public static void main(String[] args) {
		f = new Scanner(System.in);
		int N = f.nextInt();

		int min = Integer.MAX_VALUE;
		int max = Integer.MIN_VALUE;

		int[] minIndex = new int[2];
		int[] maxIndex = new int[2];

		int[][] arr = new int[N][N];
		for (int r = 0; r < N; r++) {
			for (int c = 0; c < N; c++) {
				int input = f.nextInt();

				arr[r][c] = input;

				if (input < min)  {
					min = input;
					minIndex[0] = r;
					minIndex[1] = c;
				}

				if (input > max) {
					max = input;
					maxIndex[0] = r;
					maxIndex[1] = c;
				}
			}
		}

		arr[minIndex[0]][minIndex[1]] = max;
		arr[maxIndex[0]][maxIndex[1]] = min;

		for (int[] ar : arr) {
			System.out.println(Arrays.toString(ar));
		}
	}
}
