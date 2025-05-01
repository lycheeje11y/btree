import java.util.Scanner;

public class SmallestSubarrayIndex {
	static Scanner f;
	public static void main(String[] args) {
		f = new Scanner(System.in);

		int N = f.nextInt();

		int ans = -1;
		int smallest = Integer.MAX_VALUE;

		int[][] arr = new int[N][N];
		for (int r = 0; r < N; r++) {
			int sum = 0;
			for (int c = 0; c < N; c++) {
				int input = f.nextInt();
				arr[r][c] = input;
				input += sum;
			}

			if (sum < smallest) {
				smallest = sum;
				ans = r;
			}
		}

		System.out.println(ans);
	}
}
